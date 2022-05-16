#include <iostream>
#include <string.h>

using namespace std;

char B[9][9];
bool black= 1;

/*
black - 'X';
white - 'O';
dir
NW - 1;
N  - 2;
NE - 3;
W  - 4;
E  - 5;
SW - 6;
S  - 7;
SE - 8;
*/

int dx[] = {-1, 0, 1, -1, 1, -1, 0, -1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int op(int n) {
	if (n == 'X') return 'O';
	else return 'X';
}

int isDed(int x, int y, int dir) {
	if (B[y][x] == '.') return 0;
	int nx = x+dx[dir];
	int ny = y + dy[dir];
	if (nx < 0 || ny < 0 || nx >= 8 || ny >= 8) return 0;

	if (B[ny][nx] == '.') return 0;
	if (B[ny][nx] != B[y][x])  {
		B[y][x] = B[ny][nx];
		return 1;
	}
	if (isDed(nx, ny, dir) == 1) {
		B[y][x] = op(B[y][x]);
		return 1;
	}

	return 0;
}
void print() {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			cout << B[i][j] ;
		}
		cout << '\n';
	}
}

void place(int x, int y, bool black) {
	// printf("Placing at %d %d\n", x, y);
	B[y][x] = (black) ? 'X' : 'O';
	for (int i = 0; i < 8; i++) {
		isDed(x + dx[i], y + dy[i], i);
	}

}

int main() {
	memset(B, '.', sizeof B);
	B[3][3] = 'O';
	B[3][4] = 'X';
	B[4][3] = 'X';
	B[4][4] = 'O';
	int n;
	cin >> n;
	while (n--) {
		char x; int y;
		cin >> x >> y;
		// place(a-'a', b-1, black);
		x -= 'a';
		y--;
		char color = (black) ? 'X' : 'O';
		for (int d = 0; d < 8; d++) {
			// int nx = x + dx[d];
			// int ny = y + dy[d];
			// int nnx = nx + dx[d];
			// int nny = y + dy[d];
			// if (B[y][x] == B[ny][nx]) continue;
			// if (B[nny][nnx] != B[ny][nx] && B[y][x] == B[nny][nnx]) {
			// 	B[ny][nx] = B[nny][nnx];
			// 	B[y][x] = color;
			// }
			// else {
				bool ded = false;
				int j = 2;
				while (1) {
					int njx = x + dx[d] * j;
					int njy = y + dy[d] * j;
					if (njx >= 8 || njy >= 8 || njx < 0 || njy < 0) break;
					if (B[y][x] == B[njy][njx]) {
						ded = true;
						break;
					}
					else {
						j++;
					}
				}
				if (ded) {
					for (; j >= 1; j++) {
						B[y+dy[d]*j][x+dx[d]*j] = B[y][x];
					}
				}
			// }
		}

		black = !black;
	}
		print();
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int score[5] = { 0 };
	for (int i = 0; i < 5; i++){ 
		for (int j = 0; j < 4; j++){
			int scr;
			cin >> scr;
			score[i] += scr;
		}
	}
	int max = -1;
	int maxindex = -1;
	for (int i = 0; i < 5; i++){
		if (score[i] > max) {
			max = score[i];
			maxindex = i;
		}
	}
	cout << maxindex + 1 << ' ' << max ;
}
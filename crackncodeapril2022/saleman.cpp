#include <iostream>
#include <vector>

using namespace std;

#define pii pair<int, int>
#define tii pair<pair<int, int>, int>

int n, m, i, j, a, b, c;
int main() {
	cin >> n >> m;
	vector<vector<pii>> gr(m, vector<pii>(0));
	for  (int i =0 ; i < 5; i++) {
		cin >> a >> b >> c;
		gr[a].push_back({b, c});
		gr[b].push_back({a, b});
	}



}
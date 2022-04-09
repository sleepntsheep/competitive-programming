#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
	int n, u, v;
	cin >> n >> u >> v;
	int edges[n][2];
	vector<map<int, int>> edges (n);
	for (int i = 0; i < n; i++) {
		cin >> edges[i][0] >> edges[i][1];
	}
	string token;
	cin >> token;
	int tokenleft = 0;
	int tokenright = 0;

	for (int i = 0; i < token.length(); i++){
		if (token[i] == '(') {
			tokenleft++;
		}
		else if (token[i] == ')') {
			tokenright++;
		}
	}

	
}
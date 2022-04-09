#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string res[1000];
	int resmi = 0;
	while (getline(cin, s)){

		int ai = 0;
		string n (s.length(), '-');
		for (int i = 0; i < s.length(); i++){
			if (n[i] == EOF) goto endd;
			if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[i] == s[i-2] && s[i-1] == 'p')){
				ai += 2;
			}
			n[i - ai] = s[i];
		}

		/*
		 * for (int i = 0; i < n.length()-ai ; i++){
			cout << n[i];

		*/

		res[resmi] = n;
		resmi++;
	}

endd: ;

	for (int z = 0 ;z  < resmi; z++){
		for (int i = 0 ; i < res[resmi].length(); i++){
			if (res[resmi][i] = '-'){
				break;
			}

			cout << res[resmi][i];
		}
	}
}

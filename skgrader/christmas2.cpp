#include <iostream>

int main(){
	int n;
	std::cin >> n;
	for (int i=1; i<=n; i++){
		std::string a(n-i+1, ' ');
		std::string b(i*2-1, '*');
		std::cout << a << b << "\n";
	}
	for (int i=1; i<=n+1; i++){
		std::string a(n-i+1, ' ');
		std::string b(i*2-1, '*');
		std::cout << a << b << "\n";
	}
	return 0;
}
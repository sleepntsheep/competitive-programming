#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int a[n];
	for (int i=0; i < n; i++){
		std::cin >> a[i];
	}
	int result = 0;
	for (int i=0; i < n; i++){
		result += a[i];
		std::cout << result;
		std::cout << " ";
	}
}
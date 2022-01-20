#include <iostream>

int main() {
	int x; int y;
	std::cin >> x;
	std::cin >> y;
	if (x>y){
		std::cout << 5*(12-(x-y));
	} else{
		std::cout << 5*(y-x);
	}
}
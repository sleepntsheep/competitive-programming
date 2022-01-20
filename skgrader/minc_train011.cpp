#include <iostream>

int main(){
	int a; int b; int c;
	int min = 2000000000;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a<min){
		min = a;
	}
	if (b<min) {
		min = b;
	}
	if (c<min) {
		min = c;
	}
	std::cout << min;
}
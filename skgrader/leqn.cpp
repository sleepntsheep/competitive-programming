#include <iostream>

int main(){
	int a; int b;
	std::cin >> a;
	std::cin >> b;
	
	if (a==0){
		if (b==0){
			std::cout << "NIESKONCZONOSC";
		}
		else {
					std::cout << 0;
		}

	}
	else {
		if (b%a == 0){
			std::cout << 1;
		} else{
			std::cout << 0;
		}
	}
	
	return 0;
}

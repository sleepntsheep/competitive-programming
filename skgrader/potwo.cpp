#include <iostream>
#include <math.h>

int main(){
	int n;
	std::cin >> n;
	int result;
	switch(n%4){
		case 1:
			result = 2;
			break;
		case 2:
			result = 4;
			break;
		case 3:
			result = 8;
			break;
		case 0:
			result = 6;
			break;
	}
	std::cout << result;
	return 0;
	
}
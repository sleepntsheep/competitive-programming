#include <iostream>
#include <string>

int main(){
	int r;
	std::string res = "NIE";
	scanf("%d", &r);
	if (r%4==0){
		res = "TAK";
		if (r%100==0){
			res = "NIE";
			if (r%400==0){
				res = "TAK";
			}
		}
	}
	std::cout << res;
}
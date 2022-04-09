#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		std::cin >> a[i];
	}
	int max=a[0]; int min=a[0];
	for (int i=1; i<n; i++){
		if (a[i]>max){
			max = a[i];
		}
		if (a[i]<min){
			min = a[i];
		}
	}
	std::cout << max-min;
	return 0;
}
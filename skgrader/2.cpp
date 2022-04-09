#include <iostream>

int main() {
	int c;
	scanf("%d", &c);
	int arr[c];
	
	for (int a = 0; a<c; a++){
		scanf("%d", &arr[a]);
	}
	for (int i = c - 1; i >= 0; i--) {
		printf("%d", &arr[i]);
	}
	return 0;
}
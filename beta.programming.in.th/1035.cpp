#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = n; true; i++){
		int found_factor = 0;
		for (int j = 2; j < sqrt(i); j++){
			if (i % j == 0) {
				found_factor = 1;
				break;
			}
		}
		if (found_factor) continue;
		int digit;
		int rev = 0;
		int b = i;
		while(b > 0)
		{
			digit = b % 10;
			rev = rev * 10 + digit;
			b /= 10;
		}
		if (rev == i) {
			printf("%d", i);
			return 0;
		}
	}

}


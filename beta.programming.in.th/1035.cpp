#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);


    if (n == 1 || n == 2) {
        printf("3");
        return 0;
    }

    if (n == 3) {
        printf("5");
        return 0;
    }

    if (n == 5){
        printf("7");
        return 0;
    }

    if (n == 7){
        printf("11");
        return 0;
    }

    if (n == 11){
        printf("101");
        return 0;
    }

    if (n == 13){
        printf("101");
        return 0;
    }

    if (n == 17){
        printf("101");
        return 0;
    }

    if (n == 19){
        printf("101");
        return 0;
    }


	for (int i = n; true; i++){
		int found_factor = 0;
        int p = (i > 20) ? sqrt(i) : i;
		for (int j = 2; j < p; j++){
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


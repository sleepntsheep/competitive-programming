#include <stdio.h>
#include <math.h>

bool isPrime(int num) {
    if (num == 1 || num == 0) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;    
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++){
        if (isPrime(a[i]))
            printf("GG,WP");
        else
            printf("GL,HF");
        printf("\n");
    }
}

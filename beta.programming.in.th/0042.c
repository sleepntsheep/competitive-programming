#include <stdio.h>

long double po(double a, double b) {
    long double result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        long double a;
        scanf("%Lf", &a);

        long double r = po(2, a);

        printf("%.0Lf\n", r);
    }
}

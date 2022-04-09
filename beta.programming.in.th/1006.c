#include <stdio.h>

struct Dice {
    int A[6] = { 1, 2, 3, 5, 4, 6 };

    

};

int main() {
    int n;
    scanf("%d", &n);
    char A[n][1000];
    for (int i = 0; i < n; i++) {
        scanf("%s", A[i]);
    }
}

#include <stdio.h>
#include <ctype.h>

char encrypt(char c, int k) {
    if (!isalpha(c)) return c;
    int lower = islower(c);
    c += k;
    if (!isalpha(c) || lower != islower(c))
        c -= 26;
    return c;
}

int main() {
    char a[10005], b[10005];
    int k;
    scanf("%s%d %[^\n]", a, &k, b);
    if (a[0] == 's') { //encrypt
        for (int i = 0; b[i]; i++)
            b[i] = encrypt(b[i], k);
    }
    else { // decrypt
        for (int i = 0; b[i]; i++)
            b[i] = encrypt(b[i], 26-k);
    }
    puts(b);
}

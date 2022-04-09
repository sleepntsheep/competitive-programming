#include <stdio.h>
#include <string.h>

char s[1000003];
char m[1000003];
int r[1000003];

int main() {
    scanf("%s %s", &s, &m);
    size_t len = strlen(s);
    for (int i = 0; i < len; i++) {
        int delta;
        if (s[i] >= 97 && s[i] <= 122) {
            if (m[i] >= 65 && m[i] <= 90)
                m[i] += 32;
        }
        else {
            if (m[i] >= 97 && m[i] <= 122)
                m[i] -= 32;
        }
        delta = s[i] - m[i];
        delta = (delta + 26) % 26;
        // printf("Index : %d | Target: %d | have: %d | Delta %d \n", i, s[i], m[i], delta);
        if (delta > 9){
            printf("R.I.P.");
            return 0;
        }
        r[i] = delta;
    }
    for (int i = 0; i < len; i++)
        printf("%d", r[i]);
}
#include <stdio.h>
#include <string.h>

char a[100005], b[100005];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%s %s", a, b);
        printf("%s\n", strstr(b, a) ? "Yes" : "No");
    }
}

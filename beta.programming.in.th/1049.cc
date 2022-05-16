#include <stdio.h>

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

int i, n, m, a, b, c, mx;

int MS[100005];
int MSI[100005];
int MSR[100005];
int C[10005];

int main() {
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &a, &b, &c);
        b--;
        int r = C[b];
        if (MS[r] < c) {
            MS[r] = c;
            MSI[r]= a;
            MSR[r]= b;
        } else if (MS[r] == c && MSR[r] > b) {
            MSR[r] = b;
            MSI[r] = a;
        }

        C[b]++;
        mx = max(mx, C[b]);
    }

    for (int i = 0; i < mx && MSI[i]; i++)
        printf("%d\n", MSI[i]);
    return 0;
}

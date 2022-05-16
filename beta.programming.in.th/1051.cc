#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint8_t b[17];
uint8_t h[17];
char bf[3];

int main() {
    int k;
    scanf("%d", &k);
    while (k--) {
        memset(b, 0, sizeof b);
        memset(h, 0, sizeof h);
        int n, m;
        scanf("%d%d", &n, &m);
        while (n--) {
            int c;
            scanf("%d", &c);
            while (c--) {
                scanf("%s", bf);
                if (bf[0] == '-') {
                    b[bf[1]]--;
                }
                else {
                    b[bf[1]]++;
                }
            }
        }
        while (m--) {
            int c;
            scanf("%d", &c);
            while (c--) {
                scanf("%s", bf);
                if (bf[0] == '-') {
                    h[bf[1]]--;
                }
                else {
                    h[bf[1]]++;
                }
            }
        }
        uint8_t wk = 1;
        for (int i = 0; i < 17; i++)
            if (b[i] != h[i]) {
                wk = 0;
                break;
            }

        if (wk) printf("YES\n"); else printf("NO\n");
    }
}

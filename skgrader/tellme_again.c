#include <stdio.h>
#include <string.h>
#define N 100005
char haystack[N], needle[N];
typedef long long ll;

#define B 197

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    while(n--)
    {
        cnt=0;
        scanf("%s%s", needle, haystack);
        int nlen = strlen(needle), hlen = strlen(haystack);
        ll nhash=0,hhash=0;
        ll p=1;
        for (int i = 0; i < nlen; i++)
        {
            nhash *= B;
            hhash *= B;
            nhash += needle[i];
            hhash += haystack[i];
            p*=B;
        }
        p /= B;
        for (int i = 0; i <= hlen-nlen; i++)
        {
            if (nhash == hhash)
                cnt++;
            if (i == hlen - nlen) break;
            hhash -= haystack[i] * p;
            hhash *= B;
            hhash += haystack[i+nlen];
        }
        printf("%d\n", cnt);
    }
}

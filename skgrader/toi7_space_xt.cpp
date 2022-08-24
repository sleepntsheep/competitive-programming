#include <stdio.h>
#define ll unsigned long long

ll d,c;

extern void printb(ll n);
inline void printb(ll n) {
	for (int i = d-1; i >= 0; i--)
		printf("%d", !!(n & (1ULL << i)));
}

int main() {
	scanf("%llu", &d);
	for (ll i = 0;
			i < (1ULL << d) && c < 1e5; i++)
	{
		for (ll j = 0; j < d && c < 1e5; j++) {
			ll na = i | (1ULL << j);
			if (__builtin_popcountll(i ^ na) == 1) {
                printb(i);printf(" ");
                printb(na);puts("");
                c++;
			}
		}
	}
}


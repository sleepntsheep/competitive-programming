#include <stdio.h>
#include <math.h>
typedef long long ll;

ll mun(ll num) {
	ll ret = 0;
	while(num) {
		ret *= 10;
		ret += num % 10;
		num /= 10;
	}
	return ret;
}

int isprime(ll num) {
	double bnd = sqrt(num);
	for (ll i = 2; i <= bnd; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main() {
	ll n;
	while (scanf("%lld", &n) != EOF) {
		if (n == 1)
			puts("1 is not prime.");
		int is_emirp = isprime(mun(n));
		int is_prime = isprime(n);
		if (!isprime)
			if (is_emirp)
				printf("%lld is emrip.\n", n);
			else
				printf("%lld is not prime.\n", n);
		else if (is_prime)
			if (is_emirp)
				printf("%lld is emrip.\n", n);
			else
				printf("%lld is prime.\n", n);
	}
}

#include <stdio.h>
#define square(b) ((b) * (b))
typedef long long ll;
ll dp[55] = {1, 0, 3};

int main() {
	ll n;
	scanf("%lld", &n);
	for (ll i = 4; i < 55; i+=2) 
	{
		if ((i / 2) & 1)
		{
			ll z = 0;
			for (ll j = 0; j <= i-4; j+= 2)
				z += dp[j];
			dp[i] = dp[2] * 
					dp[i-2]
					+
					2 * z;
		}
		else 
		{
			ll z = 0;
			for (ll j = 0; j <= i/2-2; j+=2) 
                for (ll k = 0; k <= i/2-2; k+=2) 
                    z += dp[j] * dp[k];

			dp[i] = square(dp[i/2]) +
					2 * z;
		}
	}
	
	printf("%lld", dp[n]);
}

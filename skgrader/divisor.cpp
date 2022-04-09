#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i * i < n; i++)
	{
		if (n % i == 0)
		{
			printf("\n");
			printf("%d", i);
		}
	}
	for (int i = sqrt(n); i >= 1; i--)
	{
		if (n % i == 0)
		{
			printf("\n");
			printf("%d", n / i);
		}
	}

	return 0;
}

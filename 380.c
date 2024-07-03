#include <stdio.h>
#include <stdlib.h>

int main()
{
	int prime[100], cnt = 1;
	for (int i = 2; i <= 100; ++i)
	{
		int flag = 0;
		for (int j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			prime[cnt++] = i;
		}
	}
	int n;
	scanf("%d", &n);
	int margin[1000], sTotal = 0, count = 0;
	for (int i = n; i < n + 5; ++i)
	{
		sTotal += prime[i];
	}
	for (int i = n; i < n + 5; ++i)
	{
		margin[count++] = abs(sTotal - 2 * prime[i]);
	}
	for (int i = n; i < n + 4; ++i)
	{
		for (int j = i + 1; j < n + 5; ++j)
		{
			margin[count++] = abs(sTotal - 2 * prime[i] - 2 * prime[j]);
		}
	}
	int smallest = margin[0];
	for (int i = 1; i < count; ++i)
	{
		if (smallest > margin[i])
		{
			smallest = margin[i];
		}
	}

	printf("%d", smallest);

	return 0;
}

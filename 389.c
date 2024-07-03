#include <stdio.h>

int main() {
	int a, b, prime[100000], cnt = 0, sum = 0;
	for (int i = 2; i <= 10000; ++i) {
		int flag = 0;
		for (int j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 1;
			}
		}
		if (flag == 0) {
			prime[cnt++] = i;
		}
	}
	scanf("%d %d", &a, &b);
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = a - 1; i <= b - 1; ++i) {
		sum += prime[i];
	}
	printf("%d", sum );
	return 0;
}
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int	i;
	int	n, max = 0, min = INT_MAX;

	printf("三つの整数を入力して下さい\n");

	for (i = 0; i < 3; i++) {

		printf("整数(No.%d):", i + 1);
		scanf("%d", &n);

		if (max < n) max = n;
		if (n < min) min = n;
	}

	printf("最小値：%d\n", min);
	printf("最大値：%d\n", max);

	return 0;
}

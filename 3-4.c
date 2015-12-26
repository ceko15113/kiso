#include <stdio.h>
int main(void)
{
	int	n;

	while (1) {
		printf("正の整数を入力して下さい。\n");
		printf("整数：");
		scanf("%d", &n);
		if (n == -1) break;

		if (n % 2 == 0 && n % 5 == 0)
			printf("%d は 2 と 5 の倍数です。\n", n);
		else if (n % 2 == 0)
			printf("%d は 2 の倍数です。\n", n);
		else if (n % 5 == 0)
			printf("%d は 5 の倍数です。\n", n);
		else
			printf("%d は 2 と 5 の倍数ではありません。\n", n);
	}

	return 0;
}

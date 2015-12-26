#include <stdio.h>
int main(void)
{
	int	n;

	printf("正の整数を入力して下さい：");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("%d は偶数です。\n", n);
	else
		printf("%d は奇数です。\n", n);

	return 0;
}

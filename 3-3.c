#include <stdio.h>
int main(void)
{
	int	min, max, sum = 0, i;

	printf("2つの整数間の合計を求めます。\n");
	printf("整数を入力して下さい。\n");

	printf("小さい方の整数：");
	scanf("%d", &min);
	printf("大きい方の整数：");
	scanf("%d", &max);

	i = min;
	while (i <= max) {
		sum += i;
		i++;
	}

	printf("合計：%d\n", sum);

	return 0;
}

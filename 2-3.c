#include <stdio.h>
int main(void)
{
	int	n1, n2;

	printf("二つの整数を入力して下さい\n");

	printf("整数Ａ：");
	scanf("%d", &n1);

	printf("整数Ｂ：");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("大きい方の値は %d です。\n", n1);
		printf("小さい方の値は %d です。\n", n2);
	} else if (n1 == n2) {
		printf("両方とも %d です。\n", n1);
	} else {
		printf("大きい方の値は %d です。\n", n2);
		printf("小さい方の値は %d です。\n", n1);
	}

	return 0;
}

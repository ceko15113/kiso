#include <stdio.h>

void error_message(void)
{
	printf("入力ミスです！\n");
}

int main(void)
{
	int	n;

	printf("奇数を入力して下さい：");
	scanf("%d", &n);

	if (n % 2 == 0) error_message();

	return 0;
}

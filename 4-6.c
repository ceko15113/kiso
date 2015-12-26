#include <stdio.h>

void error_message(void)
{
	printf("入力ミスです！\n");
}

int get_month(void)
{
	int	month;

	while (1) {
		printf("月：");
		scanf("%d", &month);
		if (1 <= month && month <= 12) break;
		error_message();
	}

	return month;
}

int main(void)
{
	int	birth_month, this_month;
	int	i, cnt = 0;

	printf("＜誕生日の月＞\n");
	birth_month = get_month();

	printf("＜現在の月＞\n");
	this_month = get_month();

	i = this_month;
	while (birth_month != i) {
		cnt++;
		i++;
		if (12 < i) i = 1;
	}

	printf("誕生日まであと %d ヶ月ですね\n", cnt);
	return 0;
}

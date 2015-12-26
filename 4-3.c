#include <stdio.h>

int get_month(void)
{
	int	month;

	while (1) {
		printf("月：");
		scanf("%d", &month);
		if (1 <= month && month <= 12) break;
		printf("入力ミスです！\n");
	}

	return month;
}

int main(void)
{
	printf("誕生日は何月ですか\n");
	printf("あなたは %d 月生まれですね\n", get_month());

	return 0;
}

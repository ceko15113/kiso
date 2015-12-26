#include <stdio.h>

#define APPLE_PRICE 100
#define ORANGE_PRICE 50

int main(void)
{
	int	numof_apple, numof_orange;
	double	apple, orange;

	printf("りんごの個数：");
	scanf("%d", &numof_apple);

	printf("みかんの個数：");
	scanf("%d", &numof_orange);

	printf("＜りんご＞\n");
	printf("単価　：%d 円\n", APPLE_PRICE);
	printf("個数　：%d 個\n", numof_apple);

	apple = APPLE_PRICE * numof_apple;

	if (20 <= numof_apple) {
		apple *= 0.8;
		printf("割引率：20%%\n");
	} else if (10 <= numof_apple) {
		apple *= 0.9;
		printf("割引率：10%%\n");
	} else if (10 <= numof_apple + numof_orange) {
		printf("割引率：5%%\n");
	} else {
		printf("割引率：0%%\n");
	}

	printf("りんごの合計金額：%.1f 円\n", apple);

	printf("＜みかん＞\n");
	printf("単価　：%d 円\n", ORANGE_PRICE);
	printf("個数　：%d 円\n", numof_orange);

	orange = ORANGE_PRICE * numof_orange;

	if (10 <= numof_orange) {
		orange *= 0.8;
		printf("割引率：20%%\n");
	} else if (10 <= numof_apple + numof_orange) {
		printf("割引率：5%%\n");
	} else {
		printf("割引率：0%%\n");
	}

	printf("みかんの合計金額：%.1f 円\n", orange);

	printf("＜合計＞\n");
	printf("合計金額：%.1f 円\n", apple + orange);

	return 0;
}

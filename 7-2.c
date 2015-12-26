#include <stdio.h>

#define SIZE 10

int main(void)
{
	int	i, sum = 0;
	int	array[SIZE];

	for (i = 0; i < SIZE; i++) {
		printf("データ[No.%d]を入力してください：", i + 1);
		scanf("%d", &array[i]);
	}

	printf("データ一覧：\n");
	for (i = 0; i < SIZE; i++) {
		printf("[No.%d] %d\n", i + 1, array[i]);
		sum += array[i];
	}

	printf("合計値：%d\n", sum);

	return 0;
}

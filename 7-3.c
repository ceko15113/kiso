#include <stdio.h>

#define SIZE 10

int main(void)
{
	int	i;
	int	array[SIZE];
	int	max, min, sum = 0;
	int	max_idx, min_idx;

	for (i = 0; i < SIZE; i++) {
		printf("データ[No.%d]を入力してください：", i + 1);
		scanf("%d", &array[i]);
	}

	sum = max = min = array[0];
	max_idx = min_idx = 0;

	for (i = 1; i < SIZE; i++) {

		sum += array[i];

		if (array[i] < min) {
			min = array[i];
			min_idx = i + 1;
		}

		if (max < array[i]) {
			max = array[i];
			max_idx = i + 1;
		}
	}

	printf("平均値：%.2f\n", (double)sum / i);
	printf("最大値：%d (No.%d)\n", max, max_idx);
	printf("最小値：%d (No.%d)\n", min, min_idx);

	return 0;
}

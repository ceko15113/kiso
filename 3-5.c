#include <stdio.h>
int main(void)
{
	int	i, n, score, sum = 0;
	int	min_score = 100, max_score = 0;
	int	min_idx, max_idx;

	printf("学生の人数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("No.%d：", i);
		scanf("%d", &score);
		if (score < min_score) {
			min_score = score;
			min_idx = i;
		}
		if (max_score < score) {
			max_score = score;
			max_idx = i;
		}
		sum += score;
	}

	printf("平均点は %.1f です。\n", (double)sum / n);
	printf("最高点：No.%d 君、%d 点\n", max_idx, max_score);
	printf("最低点：No.%d 君、%d 点\n", min_idx, min_score);

	return 0;
}

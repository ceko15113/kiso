#include <stdio.h>

#define N 10
#define A 0
#define B 1

int read_value(int lower, int upper)
{
	int	value;

	scanf("%d", &value);
	if (!(lower <= value && value <= upper)) value = -1; 

	return value;
}

void average_calc(int data[][2], double mean[], int no)
{
	int	i, j, sum;

	for (i = 0; i < no; i++) {
		sum = 0;
		for (j = 0; j < 2; j++) sum += data[i][j];
		mean[i] = (double)sum / 2;
	}
}

int max_calc(double mean[], int no)
{
	int	i, index, max;

	max = mean[0];
	index = 0;

	for (i = 1; i < no; i++) {
		if (max < mean[i]) index = i;
	}

	return index;
}

int main(void)
{
	int	i, n, index;
	int	data[N][2];
	double	mean[N];

	while (1)  {
		printf("入力データ数を入力してください：");
		n = read_value(0, N);
		if (0 < n) break;
		printf("データ数が N を超えているか負です。再入力！\n");
	}

	for (i = 0; i < n; i++) {
		while (1) {
			printf("データNo.%d-a: ", i + 1);
			data[i][A] = read_value(0, 100);
			if (0 < data[i][A]) break;
			printf("データ数が 100 を超えているか負です。再入力！\n");
		}

		while (1) {
                        printf("データNo.%d-b: ", i + 1);
			data[i][B] = read_value(0, 100);
			if (0 < data[i][B]) break;
                        printf("データ数が 100 を超えているか負です。再入力！\n");
                }
	}

	printf("入力された値を表示します\n");
	printf("\n");

	for (i = 0; i < n; i++)
		printf("[No.%d] (a) %d (b) %d\n", i + 1, data[i][A], data[i][B]);

	average_calc(data, mean, n);

	printf("各データ組の平均値は以下の通りです\n");
	printf("\n");

	for (i = 0; i < n; i++)
		printf("[No.%d] %.1f\n", i + 1, mean[i]);

	printf("\n");
	index = max_calc(mean, n);
	printf("平均値の最大値はNo.%d の %.1f です\n", index + 1, mean[index]);

	return 0;
}

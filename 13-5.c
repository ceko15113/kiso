#include <stdio.h>

#define N 10
#define M 10
#define A 0
#define B 1

typedef struct {
	int	data[2];
	char	id_num[M];
} DATA;

int read_value(int lower, int upper)
{
	int	value;

	scanf("%d", &value);
	if (!(lower <= value && value <= upper)) value = -1; 

	return value;
}

void average_calc(DATA members[], double mean[], int no)
{
	int	i, j, sum;

	for (i = 0; i < no; i++) {
		sum = 0;
		for (j = 0; j < 2; j++) sum += members[i].data[j];
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
	double	mean[N];
	DATA	members[N];

	while (1)  {
		printf("入力データ数を入力してください：");
		n = read_value(0, N);
		if (0 < n) break;
		printf("データ数が N を超えているか負です。再入力！\n");
	}

	for (i = 0; i < n; i++) {
		printf("データNo.%d の ID 番号：", i + 1);
		scanf("%s", members[i].id_num);
	}

	printf("\n");

	printf("各IDのデータを入力してください\n");

	for (i = 0; i < n; i++) {

		printf("%s\n", members[i].id_num);

		while (1) {
			printf("データa: ");
			members[i].data[A] = read_value(0, 100);
			if (0 < members[i].data[A]) break;
			printf("データ数が 100 を超えているか負です。再入力！\n");
		}

		while (1) {
                        printf("データb: ");
			members[i].data[B] = read_value(0, 100);
			if (0 < members[i].data[B]) break;
                        printf("データ数が 100 を超えているか負です。再入力！\n");
                }
	}

	printf("\n");

	printf("入力された値を表示します\n");
	for (i = 0; i < n; i++)
		printf("[%s] (a) %d (b) %d\n", members[i].id_num, members[i].data[A], members[i].data[B]);
	printf("\n");

	average_calc(members, mean, n);

	printf("各データ組の平均値は以下の通りです\n");
	for (i = 0; i < n; i++)
		printf("[%s] %.1f\n", members[i].id_num, mean[i]);

	printf("\n");
	index = max_calc(mean, n);
	printf("平均値の最大値は %s の %.1f です\n", members[index].id_num, mean[index]);

	return 0;
}

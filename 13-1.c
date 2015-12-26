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

int main(void)
{
	int	i, n;
	int	data[N][2];

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

	return 0;
}

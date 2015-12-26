#include <stdio.h>

double average_array(int score[], int no)
{
	int	i, sum = 0;

	for (i = 0; i < no; i++) sum += score[i];

	return (double)sum / no;
}

int main(void)
{
	int	i;
	int	no;

	printf("ある試験の平均点を計算します\n");

	printf("データ数を入力してください(1〜20)：");
	scanf("%d", &no);

	int	score[no];

	printf("点数を入力してください\n");
	for (i = 0; i < no; i++) {
		printf("No.%2d：", i + 1);
		scanf("%d", &score[i]);
	}

	printf("%d 科目の平均点は %.1f 点です。\n", no, average_array(score, no));

	return 0;
}

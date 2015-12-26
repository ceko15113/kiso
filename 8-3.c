#include <stdio.h>

void error_data(int element)
{
	printf("**** 入力ミス：%d は 0 以下です ****\n", element);
}

void read_array(int array[], int no)
{
	int	i = 0;

	while(i < no) {
		printf("No.%2d：", i + 1);
		scanf("%d", &array[i]);
		if (array[i] <= 0) error_data(array[i]);
		else i++;
	}
}

void show_array(int array[], int no)
{
	int	i;

	for (i = 0; i < no; i++) printf("No.%2d：%d\n", i + 1, array[i]);
}

int min_array(int array[], int no)
{
	int	i;
	int	min;

	min = array[0];

	for (i = 1; i < no; i++)
		if (array[i] < min) min = array[i];

	return min;
}

int max_array(int array[], int no)
{
	int	i;
	int	max;

	max = array[0];

	for (i = 1; i < no; i++)
		if (max < array[i]) max = array[i];

	return max;
}

double average_array(int array[], int no)
{
	int	i;
	int	sum = 0;

	for (i = 0; i < no; i++) sum += array[i];

	return (double)sum / no;
}

int main(void)
{
	int	no;

	printf("データ数を入力してください(1〜20)：");
	scanf("%d", &no);

	int	array[no];

	printf("データを入力してください\n");
	read_array(array, no);

	printf("-------\n");

	printf("データを表示します\n");
	show_array(array, no);

	printf("-------\n");

	printf("最大値は、%d です\n", max_array(array, no));
	printf("最小値は、%d です\n", min_array(array, no));
	printf("平均値は、%.1f です\n", average_array(array, no));

	return 0;
}

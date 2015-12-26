#include <stdio.h>

void reverse_data(int array[], int no)
{
	int	i;
	int	temp[no];

	for (i = 0; i < no; i++) temp[i] = array[i];

	for (i = 0; i < no; i++)
		array[no - i - 1] = temp[i];
}

int main(void)
{
	int	i;
	int	no;

	printf("入力されたデータを逆順に並び替えます\n");

	printf("データ数を入力してください(1〜20)：");
	scanf("%d", &no);

	int	array[no];

	printf("データを入力してください\n");
	for (i = 0; i < no; i++) {
		printf("No.%2d：", i + 1);
		scanf("%d", &array[i]);
	}

	printf("\n");

	reverse_data(array, no);

	printf("逆順に並び替えました\n");
	for (i = 0; i < no; i++) printf("No.%2d：%d\n", i + 1, array[i]);

	return 0;
}

#include <stdio.h>

#define SIZE 10

int main(void)
{
	int	i;
	int	array[SIZE];
	int	key;

	for (i = 0; i < SIZE; i++) {
		printf("データ[No.%d]を入力してください：", i + 1);
		scanf("%d", &array[i]);
	}

	printf("検索用データを入力してください：");
	scanf("%d", &key);

	printf("\n");

	printf("検索結果：\n");

	printf("検索データ：%d\n", key);

	i = 0;

	printf("検索データより小さいデータ：");
	while (array[i] != key)
		if (array[i] < key) printf(" %d", array[i++]);
	printf("\n");

	printf("検索データと等しいデータ：");
	while (array[i] == key)
		if (array[i] == key) printf(" %d", array[i++]);
	printf("\n");

	printf("検索データより大きいデータ：");
	while (i < SIZE) printf(" %d", array[i++]);
	printf("\n");

	return 0;
}

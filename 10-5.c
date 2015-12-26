#include <stdio.h>
#include <string.h>

#define NUM 4
#define SIZE 20

/*

int compare(char str1[], char str2[])
{
	int i;
	int flag;

	for (i = 0, flag = 1; str1[i] != '\0' || str2[i] != '\0'; i++) {
		if (str1[i] != str2[i]) {
			flag = 0;
			break;
		}
	}

	return flag;
}

*/

int main(void)
{
	int i;
	char ans[SIZE];
	char pref[NUM][SIZE];
	char name[NUM][SIZE];
	int flag;

	for (i = 0; i < NUM; i++) {
		printf("[No.%d]\n", i + 1);
		printf("名前　：");
		scanf("%s", name[i]);
		printf("出身地：");
		scanf("%s", pref[i]);
	}

	printf("\n");

	while (1) {
		printf("検索しますか？ (yes or no) : ");
		scanf("%s", ans);

		if (ans[0] == 'n') break;

		printf("検索する出身地を入力してください：");
		scanf("%s", ans);

		printf("\n");

		flag = 0;

		printf("＜検索結果＞\n");
		for (i = 0; i < NUM; i++) {
			if (!strcmp(ans, pref[i])) {
			// if (compare(ans, pref[i])) {
				flag = 1;
				printf("[No.%d] %s %s\n", i + 1, pref[i], name[i]);
			}
		}

		if (flag == 0) printf("該当者なし\n");
		printf("\n");
	}

	return 0;
}

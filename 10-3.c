#include <stdio.h>

#define SIZE 50

int main(void)
{
	char first_name[SIZE], family_name[SIZE];

	int i, num;

	printf("名の字数を入力してください：");
	scanf("%d", &num);

	getchar();

	for (i = 0; i < num; i++) {
		printf("first_name[%d] = ", i);
		scanf("%c", &first_name[i]);
		getchar();
	}
	first_name[i] = '\0';

	printf("性の字数を入力してください：");
	scanf("%d", &num);

	getchar();

	for (i = 0; i < num; i++) {
		printf("family_name[%d] = ", i);
		scanf("%c", &family_name[i]);
		getchar();
	}
	family_name[i] = '\0';

	printf("\n");

	printf("選手の氏名は\n");
	printf("性：%s\n", family_name);
	printf("名：%s\n", first_name);

	return 0;
}

#include <stdio.h>

#define SIZE 50

int main(void)
{
	char first_name[SIZE] = "Daisuke";
	char family_name[SIZE];

	printf("性を入力してください：");
	scanf("%s", family_name);

	printf("＜２つの文字列を表示します＞\n");

	printf("性：%s\n", family_name);
	printf("名：%s\n", first_name);

	return 0;
}

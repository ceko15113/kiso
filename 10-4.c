#include <stdio.h>

#define SIZE 100

int get_length(char str[])
{
	int i;

	for (i = 0; str[i] != '\0'; i++);

	return i;
}

int main(void)
{
	char str[SIZE];
	int i, len;

	printf("文字列　　　　：");
	scanf("%s", str);

	len = get_length(str);

	printf("文字列の長さ　：");
	printf("%d", len);

	printf("\n");

	printf("文字列（逆順）：");
	printf("%s.", str);
	for (i = len - 1; 0 <= i; i--) printf("%c", str[i]);

	printf("\n");

	return 0;
}

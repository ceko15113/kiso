#include <stdio.h>

void draw_char(int a_number, int s_number)
{
	int	i;

	for (i = 0; i < a_number; i++) printf("*");
	for (i = 0; i < s_number; i++) printf("#");
}

int main(void)
{
	int	a_number, s_number;

	printf("アスタリスクの数：");
	scanf("%d", &a_number);

	printf("シャープの数：");
	scanf("%d", &s_number);

	draw_char(a_number, s_number);
	printf("\n");

	return 0;
}

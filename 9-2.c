#include <stdio.h>

#define FLOOR 3
#define ROOM 4

int main(void)
{
	int	i, j;
	int	age[FLOOR][ROOM];

	printf("住人の年齢を入力してください\n");

	for (i = 0; i < FLOOR; i++) {
		printf("<< %d階 >>\n", i + 1);
		for (j = 0; j < ROOM; j++) {
			printf("%d号室：", j + 1);
			scanf("%d", &age[i][j]);
		}
	}

	printf("\n");
	printf("<< 年齢見取図 >>\n");

	for (i = FLOOR - 1; 0 <= i; i--) {
		printf("[%d階] ", i + 1);
		for (j = 0; j < ROOM; j++) printf("(%d号室) %d歳 ", j + 1, age[i][j]);
		printf("\n");
	}

	return 0;
}		

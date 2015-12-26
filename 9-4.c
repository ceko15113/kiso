#include <stdio.h>

#define ENGLISH 0
#define MATH 1
#define JAPANESE 2

#define N_OF_SUBJECT 3

void read_score(int score[][N_OF_SUBJECT], int no)
{
	int	i;

	for (i = 0; i < no; i++) {

		printf("%d番目の学生\n", i + 1);

		while (1) {
			printf("(1)英語：");
			scanf("%d", &score[i][ENGLISH]);
			if (0 <= score[i][ENGLISH] && score[i][ENGLISH] <= 100) break;
		}

		while (1) {
			printf("(2)数学：");
			scanf("%d", &score[i][MATH]);
			if (0 <= score[i][MATH] && score[i][MATH] <= 100) break;
		}
		
		while (1) {
			printf("(3)数学：");
			scanf("%d", &score[i][JAPANESE]);
			if (0 <= score[i][JAPANESE] && score[i][JAPANESE] <= 100) break;
		}
	}
}

void show_score(int score[][N_OF_SUBJECT], int subject, int no)
{
	int	i;

	printf("---------------------------\n");

	subject--;

	switch (subject) {

		case ENGLISH:
		printf("[英語]\n");
		break;

		case MATH:
		printf("[数学]\n");
		break;

		case JAPANESE:
		printf("[国語]\n");

	}

	printf("番号   点数\n");

	for (i = 0; i < no; i++) printf("%d      %d\n", i + 1, score[i][subject]);

	printf("---------------------------\n");
}

int main(void)
{
	int	subject, no;

	printf("学生数を入力してください\n");
	printf("学生数：");
	scanf("%d", &no);

	int	score[no][N_OF_SUBJECT];

	read_score(score, no);

	printf("\n");

	while (1) {
		printf("得点表を表示します。科目を選択してください。\n");
		printf("英語 => 1, 数学 => 2, 国語 => 3, 終了 => 0 : ");
		scanf("%d", &subject);
		if (subject == 0) break;
		show_score(score, subject, no);
	}

	printf("終了します\n");

	return 0;
}

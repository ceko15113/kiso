#include <stdio.h>

#define NUM 5

typedef struct {
	int id;
	int math;
	int english;
	int physics;
	int sum;
} STUDENT;

int main(void)
{
	int i;
	int max, min, sum = 0;
	STUDENT student[NUM];

	for (i = 0; i < NUM; i++) {
		printf("%d人目の学生番号は？：", i + 1);
		scanf("%d", &student[i].id);
		printf("数学の点数は？：");
		scanf("%d", &student[i].math);
		printf("英語の点数は？：");
		scanf("%d", &student[i].english);
		printf("物理の点数は？：");
		scanf("%d", &student[i].physics);

		student[i].sum = student[i].math + student[i].english + student[i].physics;
		sum += student[i].sum;
	}

	max = min = student[0].sum;
	for (i = 1; i < NUM; i++) {
		if (max < student[i].sum) max = student[i].sum;
		if (student[i].sum < min) min = student[i].sum;
	}

	printf("学生番号　数学　英語　物理　合計\n");
	for (i = 0; i < NUM; i++)
		printf(" %3d　 %3d　 %3d　 %3d　 %3d\n", student[i].id, student[i].math, student[i].english, student[i].physics, student[i].sum);

	printf("最高点は%d点\n", max);
	printf("最低点は%d点\n", min);
	printf("平均点は%.2f点\n", (double)sum / NUM);

	return 0;
}

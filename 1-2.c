#include <stdio.h>
#define PI 3.14
int main(void)
{
	double	r, s;

	printf("球の半径を入力してください：");
	scanf("%lf", &r);

	s = 4 * PI * r * r;

	printf("球の表面積は %f です。\n", s);

	return 0;
}

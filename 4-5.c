#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2)
{
	int	a, b;
	double	c;

	a = x2 - x1;
	b = y2 - y1;

	c = sqrt(a * a + b * b);

	return c;
}

int main(void)
{
	int	x1, y1, x2, y2;

	printf("＜点１＞\n");

	printf("x 座標：");
	scanf("%d", &x1);

	printf("y 座標：");
	scanf("%d", &y1);

	printf("＜点２＞\n");

	printf("x 座標：");
	scanf("%d", &x2);

	printf("y 座標：");
	scanf("%d", &y2);

	printf("＜２点間の距離＞\n");
	printf("距離：%f\n", distance(x1, y1, x2, y2));

	return 0;
}

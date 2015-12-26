#include <stdio.h>

double rectangle(double base, double height)
{
	return base * height;
}

int main(void)
{
	double	base, height;

	printf("底辺：");
	scanf("%lf", &base);

	printf("高さ：");
	scanf("%lf", &height);

	printf("面積：%.2f\n", rectangle(base, height));

	return 0;
}

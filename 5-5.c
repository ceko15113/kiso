#include <stdio.h>

int gcd(int a, int b)
{
	int	r;

	while (1) {
		r = a % b;
		if (r == 0) return b;
		a = b;
		b = r;
	}
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main(void)
{
	int	a, b;

	printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	printf("最大公約数: %d\n", gcd(a, b));
	printf("最小公倍数: %d\n", lcm(a, b));

	printf("a と b の和と差の最大公約数: %d\n", gcd(a + b, a - b));
	printf("a と b の和と差の最小公倍数: %d\n", lcm(a + b, a - b));

	return 0;
}

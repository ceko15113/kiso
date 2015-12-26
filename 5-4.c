#include <stdio.h>

int max3(int x, int y, int z);
int max33(int x, int y, int z);

int main(void)
{
	int su1, su2, su3;
	int i, kumi;
	int saidai;
	printf("max3 関数による 3 つの整数の最大値の計算\n");
	printf("3つの整数を入力してください:");
	scanf("%d%d%d", &su1, &su2, &su3);
	printf("最大値は%d です\n", max3(su1, su2, su3));
	printf("max33 関数による 3 つの整数の最大値の計算\n");
	printf("組数を入力してください:");
	scanf("%d", &kumi);
	for (i = 1; i <= kumi; i++) {
		printf("%d 組:", i);
		scanf("%d%d%d", &su1, &su2, &su3);
		saidai = max33(su1, su2, su3);
	}
	printf("%d つの組の整数の最大値は%d です\n", kumi, saidai);
	return 0;
}

int max3(int x, int y, int z)
{
	int max = 0;

	if (max < x) max = x;
	if (max < y) max = y;
	if (max < z) max = z;

	return max;
}

int max33(int x, int y, int z)
{
	static int max;
	int n;

	n = max3(x, y, z);

	if (max < n) max = n;

	return max;
}

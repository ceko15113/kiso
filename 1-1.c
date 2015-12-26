#include <stdio.h>
int main(void)
{
	int	height, width;

	printf("長方形の高さを入力してください：");
	scanf("%d", &height);

	printf("長方形の幅を入力してください：");
	scanf("%d", &width);

	printf("長方形の面積は %d です。\n", height * width);

	return 0;
}

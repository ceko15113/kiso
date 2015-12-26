#include <stdio.h>
int main(void)
{
	int	array[] = {5, 4, 3, 2, 1};
	int	i, sum = 0;

	for (i = 0; i < sizeof(array) / 4; i++) sum += array[i];

	printf("array の合計値 = %d\n", sum);

	return 0;
}

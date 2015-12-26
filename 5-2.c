#include <stdio.h>
int total;
int main(void)
{
	int i;
	int i_data;
	total = 0;

	printf("数を入力してください:");
	scanf("%d", &i_data);

	if (i_data <= 10) {
		// int total = 0;
		int count = 0;
		for (i = 0; i <= i_data; ++i) {
			total = total + count;
			count = count + 1;
		}
		printf("Total No.1: %d \n", total);	/* 1 */
    	} else {
		printf("値は 10 以下ではありません.\n");
	}
	printf("Total No.2: %d \n", total);	/* 2 */
	return 0;
}

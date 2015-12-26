#include <stdio.h>
int
main(void)
{
	int		x = 10,	y = 9, z = 8;
	printf("(1) x=%d, y=%d, z=%d \n", x, y, z);
	{
		int		y = 7,	z = 6;
		printf("(2) x=%d, y=%d, z=%d \n", x, y, z); {
			int		z = 5;
			printf("(3) x=%d, y=%d, z=%d \n", x, y, z);
		}
		printf("(4) x=%d, y=%d, z=%d \n", x, y, z);
	}
	printf("(5) x=%d, y=%d, z=%d \n", x, y, z);
	return 0;
}

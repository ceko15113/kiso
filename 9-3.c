#include <stdio.h>

#define HEIGHT 8
#define WIDTH 7

int main(void)
{
	int	data[HEIGHT][WIDTH] = {
			{0, 0, 1, 1, 1, 0, 0},
			{0, 0, 1, 1, 1, 0, 0},
			{0, 0, 1, 1, 1, 0, 0},
			{0, 0, 0, 1, 0, 1, 0},
			{0, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 1, 0, 0, 0},
			{0, 0, 1, 0, 1, 0, 0},
			{0, 1, 0, 0, 0, 1, 0}
		};

	int	i, j;

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			if (data[i][j] == 1) printf("○");
			else printf("×");
		}
		printf("\n");
	}

	return 0;
}

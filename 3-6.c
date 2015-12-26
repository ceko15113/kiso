#include <stdio.h>
int main(void)
{
	int	i, j, h, w;

	while (1) {

		printf("H:");
		scanf("%d", &h);
		printf("W:");
		scanf("%d", &w);

		printf("\n");

		if (h == 0 && w == 0) break;

		for (i = 1; i <= h; i++) {
			for (j = 1; j <= w; j++) {
				if (i == 1 || i == h || j == 1 || j == w)
					printf("#");
				else
					printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}

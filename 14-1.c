#include <stdio.h>

#define SIZE 3

void print_board(int board[][SIZE])
{
	int i, j;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("|");
			if (board[i][j] == 1) printf("○");
			else if (board[i][j] == -1) printf("×");
			else printf(" ");
		}
		printf("|\n");
	}
}

int main()
{
	int board[SIZE][SIZE];

	board[0][1] = 1;
	board[0][2] = 1;
	board[1][2] = -1;
	board[1][1] = -1;

	print_board(board);

	return 0;
}

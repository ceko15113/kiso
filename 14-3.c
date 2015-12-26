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

void mark_board(int board[SIZE][SIZE], int turn) {
	int height, width;

	if (turn == 1) printf("○のターンです\n");
	else printf("×のターンです\n");

	printf("縦位置は？");
	scanf("%d", &height);
	printf("横位置は？");
	scanf("%d", &width);

	board[height][width] = turn;
}

int main()
{
	int board[SIZE][SIZE] = {};
	int turn = 1;

	while (1) {
		mark_board(board, turn);
		print_board(board);
		turn *= -1;
	}

	return 0;
}

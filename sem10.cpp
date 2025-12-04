#include <iostream>

#pragma region Tic-Tac-Toe
size_t const BOARD_SIZE = 3;
size_t const PLAYER_COUNT = 2;
size_t const LINE_LENGTH = 3;
const char EMPTY = ' ';

void initBoard(char board[][BOARD_SIZE], char sym) 
{
	for (size_t i = 0; i < BOARD_SIZE; i++)
	{
		for (size_t j = 0; j < BOARD_SIZE; j++)
		{
			board[i][j] = sym;
		}
	}
}
void printBoard(const char board[][BOARD_SIZE])
{
	for (size_t i = 0; i < BOARD_SIZE; i++)
	{
		for (size_t j = 0; j < BOARD_SIZE; j++)
		{
			std::cout << board[i][j] << '|';
		}
		std::cout << std::endl;
	}
}

bool isSymbolValid(const char board[][BOARD_SIZE], int row, int col)
{
	if (row < 0 || row > BOARD_SIZE || col < 0 || col > BOARD_SIZE || board[row][col] != EMPTY) return false;
}

void readPlayerMove(const char board[][BOARD_SIZE], int& row, int& col)
{
	do
	{
		std::cin >> row >> col;
	} while (!isSymbolValid(board, row, col));
}

int getConsecMoves(const char board[][BOARD_SIZE], int row, int col, int moveRow, int moveCol)
{
	//check if the row/column/diagonal is winning
	//...
}

bool isPositionWon(const char board[][BOARD_SIZE], int row, int col)
{
	return getConsecMoves(board, row, col, 0, 1) >= LINE_LENGTH ||
		getConsecMoves(board, row, col, 1, 0) >= LINE_LENGTH ||
		getConsecMoves(board, row, col, 1, 1) >= LINE_LENGTH ||
		getConsecMoves(board, row, col, 1, -1) >= LINE_LENGTH;
}
/*
int main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	initBoard(board, EMPTY);

	bool hasWinner = false;
	int currPlayer = 0;
	size_t const MAX_MOVES = BOARD_SIZE * BOARD_SIZE;

	for (size_t i = 0; i < MAX_MOVES; i++)
	{
		int row, col;
		readPlayerMove(board, row, col);
		board[row][col] = 'A' + currPlayer;
		printBoard(board);

		if (isPositionWon(board, row, col))
		{
			std::cout << currPlayer << " has won!";
			break;
		}

		currPlayer = (currPlayer + 1) % PLAYER_COUNT;
	}
}*/
#pragma endregion

#pragma region Algebra

#pragma endregion


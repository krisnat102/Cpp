#include <iostream>

const int MAX_SIZE = 100;

#pragma region Helper
void swap(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void printArray(const int m[][MAX_SIZE], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
#pragma endregion

//1
void getMainDiagonal(const int matrix[][MAX_SIZE], size_t size) 
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << matrix[i][i] << " ";
	}
}

void getSecondDiagonal(const int matrix[][MAX_SIZE], size_t size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		std::cout << matrix[size - i - 1][i] << " ";
	}
}

//2
bool isMatrixTriangular(const int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (matrix[i][j] != 0) return false;
		}
	}
	return true;
}

//3
void transMatrix(int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

//4
bool magicSquare(int matrix[][MAX_SIZE], size_t size)
{
	int prevColSum = 0, prevRowSum = 0, rowSum = 0, colSum = 0, mainDSum = 0, secondDSum = 0;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			rowSum += matrix[i][j];
			colSum += matrix[j][i];
		}
		mainDSum += matrix[i][i];
		secondDSum += matrix[i][size - i - 1];
		
		if (rowSum != colSum) return false;
		if (prevRowSum != 0 && rowSum != prevRowSum) return false;
		if (prevColSum != 0 && colSum != prevColSum) return false;

		prevColSum = colSum;
		colSum = 0;
		prevRowSum = rowSum;
		rowSum = 0;

	}
	if (prevColSum != mainDSum || prevColSum != secondDSum) return false;

	return true;
}

int main()
{
	const int SIZE = 4;

	int matrix[SIZE][MAX_SIZE] = {
		{16, 3, 2, 13},
		{5, 10, 11, 8},
		{9, 6, 7, 12},
		{4, 15, 14, 1}
	};

	std::cout << magicSquare(matrix, SIZE);
}


#include <iostream>
using namespace std;

void printMatrix(int *matrix, const int row, const int col)
{
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[(col * r) + c] << " ";
		cout << endl;
	}
}

int main()
{
	const int row = 3;
	const int col = 5;
	const int values[row][col] =
		{
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15},
		};

	// init
	int *matrix = new int[row * col];

	// assign
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[(col * r) + c] = values[r][c];

	printMatrix(matrix, row, col);

	// delete
	delete[] matrix;

	return 0;
}
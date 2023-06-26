#include "./main.h"

/**
 * print_chessboard - print a chessboard of 8x8
 *
 * @a: the positions of all pieces in the board
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	for (; x < 8; x++)
	{
		for (; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
	}
}

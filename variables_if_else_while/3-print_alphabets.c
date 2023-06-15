#include <stdio.h>

/**
 * main - prints the abecedary in upper and lower cases
 *
 * Return: always return 0
 */

int main(void)
{
	char ol, dl, OL, DL;

	dl = 'z';
	DL = 'Z';

	for (ol = 'a'; ol <= dl; ol++)
		putchar(ol);
	for (OL = 'A'; OL <= DL; OL++)
		putchar(OL);
	putchar('\n');
	return (0);
}

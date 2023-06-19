#include "./main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hr, mn;
	char HR1, HR2, MN1, MN2;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			HR1 = hr / 10;
			HR2 = hr % 10;
			_putchar(HR1);
			_putchar(HR2);
			_putchar(mn / 10);
			_putchar(mn % 10);
			_putchar('\n');
		}
	}
}

#include "./main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			HR1 = '0' + (hr / 10);
			HR2 = '0' + (hr % 10);
			MN1 = '0' + (mn / 10);
			MN2 = '0' + (mn % 10);
			_putchar(HR1);
			_putchar(HR2);
			_putchar(':');
			_putchar(MN1);
			_putchar(MN2);
			_putchar('\n');
		}
	}
}

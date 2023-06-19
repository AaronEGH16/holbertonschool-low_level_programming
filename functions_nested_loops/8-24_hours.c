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
			_putchar("%c", hr / 10);
			_putchar(hr % 10);
			_putchar(mn / 10);
			_putchar(mn % 10);
			_putchar('\n');
		}
	}
}

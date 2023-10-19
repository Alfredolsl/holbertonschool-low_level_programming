#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour = 0;

	while (hour <= 23)
	{
		int minutes = 0;

		while (minutes <= 59)
		{
			if (hour <= 9)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				_putchar(hour + '0');
			}
			_putchar(':');
			if (minutes <= 9)
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			else
			{
				_putchar(minutes + '0');
			}
			_putchar('\n');

			minutes++;
		}
		hour++;
	}
}

#include "main.h"
/**
 * jack_bauer - function that prints every minute of the daybof Jack Bauer
 * n fron 00:00  to 23:59, main loop counts hours and resetvmins
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_rem;
	int min_rem;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			hrs_rem = hrs % 10;
			min_rem = mins % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_rem + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(min_rem + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}

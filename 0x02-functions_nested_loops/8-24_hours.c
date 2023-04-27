#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int hour, minut;


hour = 0;

while (hour < 24)
{
minut = 0;
while (minut < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minut / 10) + '0');
_putchar((minut % 10) + '0');
_putchar('\n');
minut++;
}
hour++;
}
}

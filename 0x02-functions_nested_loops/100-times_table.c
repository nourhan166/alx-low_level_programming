#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/
void print_times_table(int n)
{
int pord, mult, num;
if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
pord = num * mult;
if (pord <= 9)
_putchar(' ');
if (pord <= 99)
_putchar(' ');
if (pord >= 100)
{
_putchar((pord / 100) + 48);
_putchar((pord / 10) % 10 + 48);
}
else if (pord <= 99 && pord >= 10)
_putchar((pord / 10) + 48);
_putchar((pord % 10) + 48);
}
_putchar('\n');
}
}
}

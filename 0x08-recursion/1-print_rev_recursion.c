#include "main.h"

/**
 * _putchar_rev_recursion - print string in reverse
 * @s: pointer to string
 * *Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 'z';
while (n > 'a')
{
putchar(n);
n -= 1;
}
putchar('\n');
return (0);
}

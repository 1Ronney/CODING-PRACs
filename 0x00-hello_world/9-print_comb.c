#include <stdio.h>

/**
 * main - print single digits with comma and space between
 * only use putchar function
 * return 0;
 * cannot use char
 */
int main(void)
{
int i;
i = 48;
while (i <= 57)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}

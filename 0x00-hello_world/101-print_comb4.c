#include <stdio.h>

/**
 * main - printing three possible combination of numbers.
 * the numbers must be different
 * print only smallest combination
 * only the fuction putchar can be used
 * return 0.
 */
int main(void)
{
int a, b, v;
a = 48;
b = a + 1;
v = b + 1;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (v = 48; v <= 57; v++)
{	
putchar(a);
putchar(b);
putchar(v);
{
if (a == 49 && b == 50 && v == 51)
continue;
{	
putchar(',');
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}

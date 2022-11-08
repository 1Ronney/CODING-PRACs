#include <stdio.h>

/**
 * main- program to print numbers in base 16 in lower case.
 * putchar function only used thrice in the code
 * return 0
 */
int main(void)
{
int n, l;
n = 48;
l = 'a';
while ( n <= 57)
{
putchar(n);
n++;
}
while ( l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}

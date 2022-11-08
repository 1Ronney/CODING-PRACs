#include <stdio.h>
/**
 * main -print combination of two numbers 
 * only putchar to be used
 * digits must be different
 * 01 and 10 are considered similar
 * print only smallest of the combinations
 * no use of variable char
 * return 0.
 */
int main(void)
{
int s, l;
s = 48;
while (s <= 57)
{
l = s + 1;
while ( l <= 57)
{
putchar(s);
putchar(l);
if (s != 56 || l != 57)
{
putchar(',');
putchar(32);
}
l++;
}
s++;
}
putchar('\n');
return (0);
}

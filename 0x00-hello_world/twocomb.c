#include <stdio.h>
//double digit combination
//using putchar
//return 0.
int main(void)
{
int g, k;
g = 48;
k = g + 1;
for ( k = 48; k <= 57; k++)
{
for ( g = 48; g <= 57; g++)
{
putchar(k);
putchar(g);
{
if ( k == 49 && g == 50)
continue;
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * print lower case followed by uppercase letters.
 * return 0.
 */
int main(void)
{
int cl;
int sl;
cl = 'A';
sl = 'a';
for(sl = 'a'; sl <= 'z'; sl++)
{
putchar(sl);
}
for(cl = 'A'; cl <= 'Z'; cl++)
{
putchar(cl);
}
putchar('\n');
return(0);
}

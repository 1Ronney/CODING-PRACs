#include <stdio.h>
#include <ctype.h>
/** 
 * using putchar to print alphabets 
 * putchar used only twice
 * retun 0.
 */
int main(void)
{
int c;
c = 'a';
for(c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

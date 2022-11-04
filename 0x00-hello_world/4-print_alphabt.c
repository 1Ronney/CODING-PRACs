#include <stdio.h>
#include <stdlib.h>
/**
 * printing alphabet execept q and e
 * return 0.
 */
int main(void)

{ 
int al;
al = 'a';
while(al <= 'z')
{
if(al == 'e' || al == 'q')
{
al++;
}
else
{
putchar(al);
al++;
}
}
putchar('\n');
return(0);
}

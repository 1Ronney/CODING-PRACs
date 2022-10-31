#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int endn;
srand(time(0));
n = rand() - RAND_MAX / 2;
endn = n % 10;
if (endn > 5)
{
printf("End digit of %d is %d and is greater than 5\n", n, endn);
}
else if ( n == 0)
{
printf("End digit of %d is %d and is 0\n", n, endn);
}
else if (n < 6 && endn != 0)
{
printf("End digit of %d is %d and is less than 6 and not 0\n", n, endn);
}
else
{
printf("End digit of %d\n", n);
}
return (0);
}

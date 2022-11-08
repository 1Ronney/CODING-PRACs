#include <stdio.h>
void main() 
{
int i;
clrscr();
printf("Print a comma-separated list of numbers from 1 to 10 :\n");
for (i = 1; i <= 10; i++) 
{
printf("%d", i);
if (i < 10)
printf(", ");
}
printf("\n");
getch();
}

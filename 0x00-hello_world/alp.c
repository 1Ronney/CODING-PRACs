#include <stdio.h>
#include <stdlib.h>
int main(void)
{
char c;
c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
printf("value %d char %c\n", c, c);
}
exit(EXIT_SUCCESS);
}

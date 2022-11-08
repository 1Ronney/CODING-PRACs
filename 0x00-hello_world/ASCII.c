#include <stdio.h>
/**
 * printing ASCII values
 *
 * return 0.
 */
int main()
{
char c;
printf("Enter a Character Value: ");
scanf("%c", &c);
/* %d display the integer value of a Character */
/* %c display the actual character */
printf("ASCII value of %c = %d\n", c, c);

return 0;
}

#include <stdio.h>

/* programes to print sizes */
int main(void)
{
int i;
char c;
double d;
float f;
printf("Size of a int: %zu bytes\n", sizeof(i));
printf("Size of a char: %zu bytes\n ", sizeof(c));
printf("size of a double: %zu bytes\n", sizeof(d));
printf("size of a float: %zu bytes\n",sizeof(f));
return(0);
}


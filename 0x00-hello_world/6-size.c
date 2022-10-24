#include <stdio.h>

/* programes to print sizes */
int main(void)
{
int i;
char c;
double d;
float f;
printf("Size of a int: %lu bytes\n", sizeof(i));
printf("Size of a char: %lu bytes\n ", sizeof(c));
printf("size of a double: %lu bytes\n", sizeof(d));
printf("size of a float: %lu bytes\n",sizeof(f));
return(0);
}


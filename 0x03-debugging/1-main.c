#include <stdio.h>
/**
 * main - causes of infinite loop
 *
 * Return: 0
 */
int main(void)
{
int i;

printf("infinite loop incoming :(\n");

i = 0;


/*
 *while (i <10)
 *infinite loop - No increase of variable
 *putchar(i);
}
*/

printf("infinite loop avoided! \\o/\n");
return (0);
}
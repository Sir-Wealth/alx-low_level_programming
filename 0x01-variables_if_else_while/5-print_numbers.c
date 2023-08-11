#include <stdio.h>

/**
 * main -  prints all single digit numbers
 *
 * Return: Eachtime 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');
return (0);
}


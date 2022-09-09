#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print the alphabetic
 * Return: 0 if successfull.
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	printf("\n");

	return (0);
}

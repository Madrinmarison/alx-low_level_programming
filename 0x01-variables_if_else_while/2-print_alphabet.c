#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}

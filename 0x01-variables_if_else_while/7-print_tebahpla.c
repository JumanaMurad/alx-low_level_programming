#include<stdio.h>
/**
  * main - entry point
  *
  * Return: always 0
  */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

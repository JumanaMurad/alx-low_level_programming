#include<stdio.h>
/**
  * main - entry point
  *
  * Return: always 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar(' ');
	return (0);
}

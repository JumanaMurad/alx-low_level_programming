#include<stdio.h>
/**
  * main - entry point
  *
  * Return: always 0
  */
int main(void)
{
	int d;
	int p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = '0'; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);
				if ( d == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

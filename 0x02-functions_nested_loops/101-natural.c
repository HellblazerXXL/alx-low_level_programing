#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n: is integer variable for print times table
 *
 * Return: Always 0.
 */
int main()
{
	long unsigned int i, sum=0;
	clrscr();
	for(i=0;i<1000;i++)
	{
		if((i%5==0) || (i%3==0))
		{
			sum=sum+i;
		}
	}
	printf("%ldn", sum);
	getchar();
	return 0;
}

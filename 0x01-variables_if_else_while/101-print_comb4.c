#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: always 0 (succees)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)/*prints tens digits*/
		{
			for (ones = '0'; ones <= '9'; ones++)/*prints one digit*/
			{
				if (!((ones == tens) || (hundreds == tens) || (tens > ones) || (hundreds > tens)))/*eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if(!(ones == '9' && hundreds == '7' && tens == '8'))/*adds coma and spaces*/
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

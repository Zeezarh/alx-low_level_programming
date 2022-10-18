#include <main.h>
/**
 * prints alphabet in lowercase
 * Return: returns 0
 */

void print_alpahbet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

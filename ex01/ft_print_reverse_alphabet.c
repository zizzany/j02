#include <stdio.h>

int ft_putchar (char c)
{
	write (1, &c, 1);
	return (0);
}

int ft_print_reverse_alphabet(void)
{
	char letter;
	
	letter = 'z';

	while ( letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}

	write (1,"\n",1);
	
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

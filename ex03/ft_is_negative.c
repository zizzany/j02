#include <unistd.h>
 
int ft_putchar(char letter) 
{
    write( 1, &letter, 1 );
    
    return 0;
}
 
void ft_is_negative (int n)
{
    if (n>=0)
    {
    	ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
 
int main() 
{
    ft_is_negative(4568);
    
    return 0;
}

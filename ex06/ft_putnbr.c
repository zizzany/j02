#include <unistd.h>
#include <stdlib.h>
 
char    **init_tab(char **tab, int nbr)
{
  int   i;
  int   x;
  int   y;
  int   nbr_result;
 
  i = 0;
  nbr_result = (nbr * 27) * nbr;
  tab = malloc(nbr_result * sizeof(char*));
 
	 while (i < nbr_result)
   	{
     	tab[i] = malloc(nbr * sizeof(char));
     	i++;
   	}
  tab[i] = "\0";
 
  x = 0;
  y = 0;
 
	  while (x < nbr_result)
   	{
     while (y < nbr)
       		{
        	tab[x][y] = 'a';
       		y++;
       		}
     	y = 0;
     	x++;
  	 }
  return (tab);
}
 
	void    ft_aff_tab(char **tab)
	{	
  	int   x;
 
	  x = 0;
  		while(tab[x] != "\0")
    	{
      	ft_putstr(tab[x]);
      	ft_putchar('\n');
      	x++;
    	}
}
 
int main(int argc, char **argv)
{
  int   nbr;
  char  **tab;
  
  nbr = atoi(argv[1]);
  tab = init_tab(tab, nbr);
  /* ft_comb_n(); */
  ft_aff_tab(tab);
  return (0);
}


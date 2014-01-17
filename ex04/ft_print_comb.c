void ft_print_comb()
{
    
 int a,b,c=0;

  while(a<=7)

 {
    b = a+1;
    while(b<=8)
    {
        c = b+1;
        while(c<=9)
        {
            printf("%d%d%d\n",a,b,c);
            c++;
        }
        b++;
    }
    a++;
  }
}

int main ()
{
    ft_print_comb();
    return 0;
}


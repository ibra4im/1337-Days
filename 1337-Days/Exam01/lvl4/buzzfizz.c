#include <unistd.h>
void ft_putchar(char c) { write(1,&c,1); }
void    ft_putnbr(int nb)
{
    long n = nb ;
    if (n < 0)
    {
        write(1,"-",1);
        n *= -1;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
int     main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 4 == 0)
        {
            write(1,"buzz\n",5);
        }
        else if (i % 7 == 0)
        {
            write(1,"fizz\n",5);
        }
        else if (i % 4 == 0 && i % 7 == 0)
        {
            write(1,"buzzfizz\n",9);
        }
        else 
        {
            ft_putnbr(i);
            write(1,"\n",1);
        }
        i++;
    }
}

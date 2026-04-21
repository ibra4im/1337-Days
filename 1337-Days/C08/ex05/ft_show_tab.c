#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
}
void    ft_putnbr(int nb)
{
    long n = nb ;
    if (n < 0)
    {
        n *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}
int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void    ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while (par[i].str != '\0')
    {
        ft_putstr(par[i].str);
        write(1,"\n",1);
        ft_putnbr(par[i],size);
        write(1,"\n",1);
        ft_putstr(par[i].copy);
        write(1,"\n",1);
        i++;
    }
}

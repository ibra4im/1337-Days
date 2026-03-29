int     ft_is_prime(int nb)
{
    int i = 2 ;    
    if (nb == 0 || nb == 1)
        return 0;
    while (i < nb - 1)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int ft_find_next_prime(int nb)
{
    while (nb++)
    {
        if(ft_is_prime(nb) == 1)
        {
            return nb;
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("%d",ft_find_next_prime(8));
}

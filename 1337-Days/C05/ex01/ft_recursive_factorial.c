int     ft_recursive_factorial(int nb)
{
    int res = 1;
    if (nb < 0)
    return 0;
    if (nb == 0 || nb == 1)
    return 1;
    res = nb * ft_recursive_factorial(nb - 1);
    return res;
}
#include <stdio.h>
int main()
{
    printf("%d",ft_recursive_factorial(5));
}

int     ft_iterative_power(int nb, int power)
{
    int res = 1;
    if (power < 0)
    return 0;
    if (power == 0 && nb == 0)
        return 1;
    while (power >= 1)
    {
        res *=  nb;
        power--;
    }
    return res;
}
#include <stdio.h>
int main()
{
    printf("%d",ft_iterative_power(6,0));
}

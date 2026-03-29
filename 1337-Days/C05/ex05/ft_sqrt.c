int     ft_sqrt(int nb)
{
    int n = 1;
    while (n <= nb / 2)
    {
        if (n * n == nb)
        {
            return n;
        }
        n++;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("%d",ft_sqrt(4));
}

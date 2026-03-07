#include <stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int main()
{
    int a = 55;
    printf("%d\n",a);
    ft_ft(&a);
    printf("%d",a);
}

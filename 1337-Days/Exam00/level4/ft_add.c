void    ft_add(int a,int *ptr)
{
    *ptr += a;
}
#include <stdio.h>
int main()
{
    int a = 1336;
    int *ptr = &a;
    ft_add(a,ptr); 
    printf("%d",*ptr);
}

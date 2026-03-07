void    ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp ;
}
#include <stdio.h>
int main()
{
    int a = 1337;
    int b = 42;
    printf("a = %d b = %d\n",a,b);
    ft_swap(&a,&b);
    printf("a = %d b = %d",a,b);
    }

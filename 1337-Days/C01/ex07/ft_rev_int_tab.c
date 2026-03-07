void    ft_rev_int_tab(int *tab, int size)
{
    int first = 0 ;
    int last = size - 1 ;
    while (first < last)
    {
        int tmp = tab[first];
        tab[first] = tab[last];
        tab[last] = tmp ;
        first++;
        last--;
    }
}
#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main()
{
    int size = 5 ;
    int arr[] = {1,2,3,4,5};
    ft_rev_int_tab(arr,size);
    int i = 0 ;
    while (i < size)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
}

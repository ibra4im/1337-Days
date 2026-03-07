void    ft_swap(int *a, int *b)
{
    int tmp ;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void    ft_sort_int_tab(int *tab, int size)
{
    int i = 0 ;
    while(i < size)
    {
        int j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
                ft_swap(&tab[j],&tab[j+1]);
            j++;
        }
        i++;
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
    int arr[] = {8,9,3,4,5};
    ft_sort_int_tab(arr,size);
    int i = 0 ;
    while (i < size)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
}

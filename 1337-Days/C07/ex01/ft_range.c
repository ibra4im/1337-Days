#include <stdlib.h>
int     *ft_range(int min, int max)
{
    int *range;
    int i ;
    int size = max - min;
    if (size <= 0)
        return NULL;
    range = malloc(sizeof(int) * size);
    if (!range)
        return NULL;
    i = 0;
    while (i < size)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}
#include <stdio.h>
int main()
{
    int *p = ft_range(1,9);
    int size = 9 - 1;
    for(int i = 0 ;i < size;i++)
    {
        printf("%d ",p[i]);
    }
}

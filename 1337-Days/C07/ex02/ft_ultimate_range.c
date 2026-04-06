#include <stdlib.h>
int     ft_ultimate_range(int **range, int min, int max)
{
    int *point;
    if (max <= min)
    {
        range = 0;
        return 0;
    }
    int size = max - min;
    point = malloc(sizeof(int) * size);
    if (!point)
    {
        range = 0;
        return -1;
    }
    int i = 0;
    while (i < max)
    {
        point[i] = min + i;
    i++;
    }
    *range = point; // pass malloced arr to main
    return size;
}
#include <stdio.h>
int main()
{
    int i = 0;
    int *range;
    while(i < 10)
    {
        printf("%d ",range[i]);
        i++;
    }
}

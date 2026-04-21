#include <stdlib.h>
#include "ft_stock_str.h"
int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *str)
{
    int i ;
    char *d;
    d = malloc(sizeof(char ) * ft_strlen(str) + 1);
    if (!d)
    {
        return NULL;
    }
    i = 0;
    while (str[i] != '\0')
    {
        d[i] = str[i];
        i++;
    }
    d[i] = '\0';
    return d;
}
struct  s_stock_str *ft_strs_to_tab(int ac,char **av)
{
    int i ;
    struct  s_stock_str *arr;
    arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
    if (!arr)
    {
        return NULL;
    }
    i = 0;
    while (i < ac)
    {
        arr[i].size = ft_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = ft_strdup(av[i]);
        i++;
    }
    arr[i].size = 0;
    arr[i].copy = 0;
    arr[i].str = 0;
    return arr;
}

char    *ft_strstr(char *str,char *to_find)
{
    int i = 0 ;
    int j = 0 ;
    if (to_find[j] == '\0')
    {
        return (0);
    }
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && to_find[j])
        {
            j++;
            if (to_find[j] == '\0')
            {
                return &str[i];
            }
        }
        i++;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char *str = "hello world";
    char *tofind = "world";
    printf("%s",ft_strstr(str,tofind));
}

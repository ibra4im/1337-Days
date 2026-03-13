char    *ft_strcpy(char *dest, char *src)
{
    int i = 0 ;
    while (src[i] !=  '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
#include <stdio.h>
int main()
{
    char source[] = {"hello world"};
    char dest[15];
    ft_strcpy(dest,source);
    printf("%s",dest);
}

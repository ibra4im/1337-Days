char    *ft_strcat(char *dest,char *src)
{
    int i = 0 ;
    while (dest[i] != '\0')
        i++;
    int len = i ;
    i = 0;
    while (src[i] != '\0')
    {
        dest[len] = src[i];
        len++;        
        i++;
    }
    dest[len] = '\0';
    return dest;
}
#include <stdio.h>
int main()
{
    char dest[15] = "hello ";
    char *src = "world";
    ft_strcat(dest,src);
    printf("%s",dest);
}

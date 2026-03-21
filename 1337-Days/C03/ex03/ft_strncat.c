char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0 ;
    int len ;
    while(dest[i] != '\0')
        i++;
    len = i ;
    i = 0;
    while(i < nb && src[i] != '\0')
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
    ft_strncat(dest,src,2);
    printf("%s",dest);
}

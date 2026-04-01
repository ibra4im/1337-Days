#include <stdlib.h>
int          ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
char        *ft_strdup(char *src)
{
    char *cpy;
    int len = ft_strlen(src);
    int i = 0;    

    cpy = malloc(sizeof(char) * (len + 1));
    if (cpy == NULL)
        return NULL;

    while (src[i] != '\0')
    {
        cpy[i] = src[i];
        i++;
    }
    cpy[i] = '\0';
    return cpy;
}
#include <stdio.h>
int main()
{
    char s[] = "brahim top 1 ??";
    char *res = ft_strdup(s);
    printf("%s",res);
}

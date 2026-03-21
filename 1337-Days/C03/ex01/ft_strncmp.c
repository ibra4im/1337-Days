int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int  i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i] ;
}
#include <stdio.h>
int main()
{
    char *s = "hellp";
    char *p = "hollo";
    printf("%d",ft_strncmp(s,p,3));
}

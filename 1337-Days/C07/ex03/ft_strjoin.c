#include <stdlib.h>
int     ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
int totallen(int size, char **strs, char *sep)
{
    int i = 0;
    int TotalLen = 0 ;
    while (i < size)
    {
        TotalLen += ft_strlen(strs[i++]);
    }
    TotalLen += ft_strlen(sep) * (size - 1);
    return TotalLen;
}
char    *makenewstr(char *d,char **strs,int size,char *sep)
{
    int i ;
    int s ;
    int j ;
    
    i = 0;
    s = 0; 
    while (i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            d[s++] = strs[i][j++];
        }
        j = 0 ;
        while (sep[j] && i < size - 1)
        {
            d[s++] = sep[j++];
        }
        i++;
    }
    d[s] = '\0';
    return d;
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
    int t_len;
    char *d;
    if (size <= 0)
    {
        d = malloc(sizeof(char));
        return d;
    }
    t_len= totallen(size,strs,sep) +1;
    d = malloc(sizeof(char) * t_len);
    if (!d)
    {
        return(NULL);
    }
    d = makenewstr(d,strs,size,sep);
    return d;
}

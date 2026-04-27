#include <stdlib.h>
int     is_charset(char s, char *charset)
{
    int i = 0;
    while (charset[i])
    {
        if (charset[i] == s)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int     count_words(char *str, char *charset)
{
    int i = 0 ;
    int word = 0;
    while (str[i] != '\0')
    {
        while (str[i] && is_charset(str[i],charset))
        {
            i++;
        }
        if (str[i])
        {
            word++;
        }
        while (str[i] && !is_charset(str[i],charset))
        {
            i++;
        }
    }
    return word;
}
char    *Makestr(char *str, int start, int end)
{
    int i ;
    char *s;
    s = malloc(sizeof(char ) * (end - start )+ 1);
    if (!s)
    {
        return NULL;
    }

    i = 0;
    while (end > start)
    {
        s[i++] = str[start++];
    }
    s[i] = '\0';
    return s;
}
char    **ft_split(char *str,char *charset)
{
    int i = 0 ;
    int j = 0 ;
    int start;
    char **res;
    res = malloc(sizeof(char *) * count_words(str,charset) + 1);
    if (!res)
    {
        return NULL;
    }
    while (str[i] != '\0')
    {
        while(str[i] && is_charset(str[i],charset))
        {
            i++;
        }
        start = i;
        while (str[i] && !is_charset(str[i],charset))
        {
            i++;
        }
        if (i > start)
        {
            res[j++] = Makestr(str,start,i);
        }
    }
    res[j] = NULL;
    return res;
}

#include <stdlib.h>
int     is_charset(char c, char *charset)
{
    int i ;
    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return 0;
}
int     count_word(char *str, char *charset)
{
    int i = 0;
    int word = 0;
    while (str[i] != '\0')
    {
        while (str[i] && (is_charset(str[i],charset)))
        {
            i++;
        }
        if (str[i])
        {
            word++;
        }
        while (str[i] && !(is_charset(str[i],charset)))
        {
            i++;
        }
    }
    return word;
}
char    *word_dup(char *str, int start, int end)
{
    char *word;
    int i = 0;
    word = malloc(sizeof(char) * (end - start + 1));
    if (!word)
    {
        return (NULL);
    }
    while (start < end)
    {
        word[i++] = str[start++];
    }
    word[i] = '\0';
    return (word);
}
char    **ft_split(char *str, char *charset)
{
    char **res;
    int i = 0 ;
    int j = 0 ;
    int start;
    res = malloc(sizeof(char *) *(count_word(str,charset) + 1));
    if (!res)
    {
        return NULL;
    }
    while (str[i])
    {
        while (str[i] && is_charset(str[i],charset))
        {
            i++;
        }
        start = i ;
        while (str[i] && !is_charset(str[i],charset))
        {
            i++;
        }
        if (i > start)
        {
            res[j++] = word_dup(str,start,i);
        }
    }
    res[j] = NULL;
    return res;
}
#include <unistd.h>
int main()
{
    char *s = "hello,brahim,cv";
    char *charset = ",";
    char **d = ft_split(s,charset);
    for (int i = 0; d[i]; i++)
    {
        int j = 0;
        while (d[i][j])
        {
            write(1, &d[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
}

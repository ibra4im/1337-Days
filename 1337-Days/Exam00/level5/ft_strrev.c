int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void    ft_strrev(char *str)
{
    int len = ft_strlen(str);
    int first = 0;
    int last = len - 1;
    while (first < last)
    {
        char tmp = str[first];
        str[first] = str[last];
        str[last] = tmp;
        first++;
        last--;
    }
}

int     count_words(char *str)
{
    int i = 0;
    int words = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t' && 
        (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
        {
            words++;
        }
        i++;
    }
    return (words);
}

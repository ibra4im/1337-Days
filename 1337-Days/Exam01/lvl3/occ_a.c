int     occ_a(char *str)
{
    int i = 0;
    int a = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            a++;
        }
        i++;
    }
    return a;
}

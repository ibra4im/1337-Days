int occ_a(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A')
        {
            res++;
        }
        i++;
    }
    return res;
}

int     occ_z(char *str)
{
    int i = 0;
    int z = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'z')
        {
            z++;
        }
        i++;
    }
    return z;
}

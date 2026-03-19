unsigned int ft_strlcpy(char *dest,char *src,unsigned int size)
{
    unsigned i = 0;
    if (0 < size)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        } 
        dest[i] = '\0';               
    }
    while (src[i])
    {
        i++;
    }
    return i ;
}

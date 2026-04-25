#include <unistd.h>
void    ft_putstr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(1,&s[i],1);
        i++;
    }
}
void    wdmatch(char *s1,char *s2)
{
    int i = 0;
    int j = 0;
    // the algortihme is we incremnt i and compare strings 
    // s1 reach the NULL-terminator only if we can print it
    while (s1[i] != '\0' && s2[j] != '\0')
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    // if s[i] reach the NULL thats mean we can print the string
    if (s1[i] == '\0')
    {
        ft_putstr(s1);
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        wdmatch(av[1],av[2]);
    }
    write(1,"\n",1);
}

#include <unistd.h>
char    to_lower(char c)
{
    c += 32;
    return c;
}
char    to_upper(char c)
{
    c -= 32;
    return c;
}
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = to_upper(av[1][i]);
                write(1,&av[1][i],1);
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = to_lower(av[1][i]);
                write(1,&av[1][i],1);
            }
            else 
            {
                write(1,&av[1][i],1);
            }
            i++;
        }
    }
    write(1,"\n",1);
}

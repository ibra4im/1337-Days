#include <unistd.h>
int     ft_strlen(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        int len = ft_strlen(av[1]);
        while (i < len && av[1][i] == av[1][len - 1 - i])
        {
            write(1,&av[1][i],1);
            i++;            
        }
        write(1,"\n",1);
    }
    write(1,"\n",1);
}

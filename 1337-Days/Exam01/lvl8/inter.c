#include <unistd.h>
int     SeenBefor(char *str,int index)
{
    int i = 0 ;
    while (i < index)
    {
        if (str[i] == str[index])
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0 ;
        while (av[1][i] != '\0')
        {
            if (!SeenBefor(av[1],i))
            {              
                int j = 0 ;
                while (av[2][j] != '\0')
                {
                    if (av[1][i] == av[2][j])
                    {
                        write(1,&av[1][i],1);
                        break;
                    }
                    j++;
                }
            }    
            i++;
        }
    }
    write(1,"\n",1);
}

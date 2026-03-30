#include <unistd.h>
int main(int ac,char **av)
{
    if (ac > 1)
    {
        int j = 1;
        while (av[j])
        {
        int i = 0;            
            while (av[j][i] != '\0')
            {
                write(1,&av[j][i],1);
                i++;
            }
            write(1,"\n",1);
            j++;
        }
    }
}

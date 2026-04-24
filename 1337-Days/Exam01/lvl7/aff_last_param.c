#include <unistd.h>
int main(int ac,char **av)
{
    if (ac < 2)
    {
        write(1,"\n",1);
    }
    else 
    {
        int j = ac - 1;
        int i = 0;
        while (av[j][i] != '\0')
        {
            write(1,&av[j][i],1);
            i++;
        }
        write(1,"\n",1);
    }
}

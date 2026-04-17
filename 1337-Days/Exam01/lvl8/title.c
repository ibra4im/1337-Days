#include <unistd.h>
int main(int ac,char **av)
{
    int i ;
    int j ;
    if (ac < 2)
    {
        write(1,"\n",1);
        return 0;
    }
        j = 1;          
        while (j < ac)
        {
            i= 0;
            while (av[j][i] != '\0')
            {
                if ((i == 0 || av[j][i - 1] == ' ' || av[j][i - 1] == '\t')
                    && (av[j][i] >= 'a' && av[j][i] <= 'z'))
                {
                    av[j][i] -= 32;
                    write(1,&av[j][i],1);
                }
                else 
                {
                    write(1,&av[j][i],1);
                }
            i++;
            }
        write(1,"\n",1);    
        j++;           
        }  
    return 0;
}

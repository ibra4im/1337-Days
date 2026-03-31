#include <unistd.h>
int ft_strcmp(char *s1,char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;

    return s1[i] - s2[i];
}
void sort(int ac,char **av)
{
    int i = 1;
    char *s;
    while (i < ac - 1)
    {
        if (ft_strcmp(av[i],av[i+ 1]) > 0)
        {
            s = av[i];
            av[i] = av[i + 1];
            av[i + 1] = s;
            i = 0;
        }
        i++;
    }
}
int main(int ac,char **av)
{
    int i;
    int j;
    
    j = 1;
    sort(ac,av);
    while (j < ac)
    {
        i = 0 ;
        while (av[j][i])
            write(1,&av[j][i++],1);
        write(1,"\n",1);
        j++;
    }
}

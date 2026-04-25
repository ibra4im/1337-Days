#include <unistd.h>
int already_seen(char *str,int index)
{
    int i = 0;
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
int     in_first(char *str, char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (1);
        }
        i++;
    }
    return 0;
}
int main(int ac, char **av)
{
    // algorithme 
    /* we build aleardy_seen helper function 
        to avoid duplicates in the first string av[1]
       and We build helper function in_first 
        to avoid charchters in the second one and the first one av[1] and av[2]
        and for second stirng av[2] we use aleardy_seen to avoid duplicates 

        the goal is avoid duplicates in first string av[1]
        and avoid duplicates in string 2 av[2] and avoid the char appears in the first one
    */
    if (ac != 3)
    {
        write(1,"\n",1);
        return 0;
    }
        int i = 0 ;
        while (av[1][i] != '\0')
        {
            if (!already_seen(av[1],i))
            {
                write(1,&av[1][i],1);
            }
            i++;
        }
        // second string av[2]
        i = 0;
        while (av[2][i] != '\0')
        {
            if (!already_seen(av[2],i) && ! in_first(av[1],av[2][i]))
            {
                write(1,&av[2][i],1);
            }
            i++;
        }
        write(1,"\n",1);
        return 0;
}

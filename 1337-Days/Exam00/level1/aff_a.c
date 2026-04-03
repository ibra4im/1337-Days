#include <unistd.h>
int main(int ac,char *av[])
{
    if (ac)
    {
        while(av)
        {
            write(1,"a\n",2);
            break;
        }
    }
}

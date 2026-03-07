#include <unistd.h>
void nmbr(int n)
{
        if(n < 0 )
        {
                write(1, "-", 1);
                n = -n;
        }
        if(n >= 10 )
                nmbr(n / 10);
        char c = (n % 10 ) + '0';
        write(1, &c, 1);
}
int main()
{
    nmbr(-202);
}

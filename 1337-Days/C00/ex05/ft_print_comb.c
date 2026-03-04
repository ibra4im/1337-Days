#include <unistd.h>

void    ft_print_comb(void)
{
    char first = '0';
    while (first <= '2')
    {
        char second = first + 1;        
        while(second <= '3')
        {
        char third = second + 1;            
            while(third <= '4')
            {
                write(1,&first,1);
                write(1,&second,1);
                write(1,&third,1);
                third++;
                if (first != '2')
                    write(1,", ",2);
            }
            second++;
        }
        first++;
    }
}
int main()
{
    ft_print_comb();
}

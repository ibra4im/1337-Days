int     ft_iterative_factorial(int nb)
{
    int res = 1;
    if (nb == 0 || nb < 0)
        return 0;
    while (nb >= 1)
    {
        res *= nb;
        nb--;
    }
    return res;
}
int main()
{
    ft_iterative_factorial(8);
}

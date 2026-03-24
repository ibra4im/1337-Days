int     ft_atoi(char *str)
{
    int i = 0 ;
    int sign = 1;
        while(str[i] <= 32)
        {
            i++;
        }
        while (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign *= -1;
            i++; 
        }
        int number;
        while (str[i] >= '0' && str[i] <= '9')
        {
            number =  (number * 10) + (str[i] - '0');
            i++;
        }
        return (sign * number);
}

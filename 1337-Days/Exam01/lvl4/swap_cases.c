#include <unistd.h>
char    to_lower(char c)
{
    c += 32;
    return c;
}
char    to_upper(char c)
{
    c -= 32;
    return c;
}
char    *swap_cases(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = to_upper(str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = to_lower(str[i]);
        }
        i++;
    }
    return str;
}

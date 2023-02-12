#include <malloc.h>

int count(int nbr)
{
    int counter = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
    {
        counter++;
        nbr = -nbr;
    }
    while (nbr)
    {
        nbr /= 10;
        counter++;
    }
    return (counter);
}

char *ft_itoa(int nbr)
{
    int len = count(nbr);
    int i = 0;
    char *str = malloc(sizeof(char) * count(nbr));
    if (nbr == -2147483648)
        return ("-2147483648");
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
        i++;
    }
    if (nbr == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    while (i < len--)
    {
        str[len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (str);
}
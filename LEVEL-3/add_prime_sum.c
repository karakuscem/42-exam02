#include <unistd.h>

void ft_putnbr(int nbr)
{
    char x;
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    x = nbr % 10 + '0';
    write(1, &x, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

int is_prime(int num)
{
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc != 2 || ft_atoi(argv[1]) <= 0)
        write(1, "0\n", 2);
    else
    {
        int i = 2;
        int num = ft_atoi(argv[1]);
        int res = 0;
        if (num == 1)
        {
            ft_putnbr(1);
            return 0;
        }
        while (i <= num)
        {
            if (is_prime(i) == 1)
                res += i;
            i++;
        }
        ft_putnbr(res);
        write(1, "\n", 1);
    }
}
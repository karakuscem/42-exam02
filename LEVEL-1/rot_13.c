#include <unistd.h>

char *rot_13(char *str)
{
    int i = 0;
    while (str[i])
    {
        if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            str[i] += 13;
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            str[i] -= 13;
        i++;
    }
    return (str);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *rot = rot_13(argv[1]);
        ft_putstr(rot);
    }
    write(1, "\n", 1);
}
#include <unistd.h>

int check(char *str, char x, int y)
{
    int i = 0;
    while (str[i] && i < y)
    {
        if (x == str[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    if (!str[0])
        return (1);
    return(1 + ft_strlen(str + 1));
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        while (argv[1])
        {
            int j = 0;
            while (argv[1][j])
            {
                if (check(argv[1], argv[1][j], j) == 0)
                    write(1, &argv[1][j], 1);
                j++;
            }
            break;
        }
        while (argv[2])
        {
            int j = 0;
            while (argv[2][j])
            {
                if (check(argv[1], argv[2][j], ft_strlen(argv[1])) == 0 && check(argv[2], argv[2][j], j) == 0)
                    write(1, &argv[2][j], 1);
                j++;
            }
            break;
        }
    }
}
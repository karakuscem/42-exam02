#include <unistd.h>

int get_index(char x)
{
    if (x >= 'a' && x <= 'z')
        return (x - 'a' + 1);
    else if (x >= 'A' && x <= 'Z')
        return (x - 'A' + 1);
    else
        return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            int j = -1;
            while (++j < get_index(argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
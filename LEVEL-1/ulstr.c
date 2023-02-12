#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = -1;
        while (str[++i])
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
                write(1, &str[i], 1);
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
                write(1, &str[i], 1);
            }
            else
                write(1, &str[i], 1);
        }
    }
    write(1, "\n", 1);
}
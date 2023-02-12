#include <unistd.h>

char replace(char x)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    char *alphabet2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;
    if (x >= 'a' && x <= 'z')
    {
        while (x != alphabet[i])
            i++;
        x = alphabet[25 - i];
    }
    else if (x >= 'A' && x <= 'Z')
    {
        while (x != alphabet2[i])
            i++;
        x = alphabet2[25 - i];
    }
    return (x);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = -1;
        while (argv[1][++i])
        {
            argv[1][i] = replace(argv[1][i]);
            write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
}
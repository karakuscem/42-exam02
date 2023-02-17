#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        int i = 0;
        while(argv[1])
        {
            while (argv[1][i])
            {
                while (argv[1][i] == '\t' || argv[1][i] == ' ' || argv[1][i] == '\n')
                    i++;
                while (argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\n' && argv[1][i])
                    write(1, &argv[1][i++], 1);
                break;
            }
            break ;
        }
        write(1, "\n", 1);
    }
}
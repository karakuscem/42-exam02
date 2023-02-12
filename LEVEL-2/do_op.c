#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    if (argc != 4)
        write(1, "\n", 1);
    else if (argc == 4)
    {
        int first_num = atoi(argv[1]);
        int sec_num = atoi(argv[3]);
        if (argv[2][0] == '+')
            printf("%d\n", first_num + sec_num);
        else if (argv[2][0] == '-')
            printf("%d\n", first_num - sec_num);
        else if (argv[2][0] == '/')
            printf("%d\n", first_num / sec_num);
        else if (argv[2][0] == '%')
            printf("%d\n", first_num % sec_num);
        else if (argv[2][0] == '*')
            printf("%d\n", first_num * sec_num);
    }
}
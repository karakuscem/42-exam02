#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;

        while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' && str[i])
            i++;
        while(str[i])
        {
            if (!((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
                write(1, &str[i++], 1);
            else if (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i + 1])
            {
                write(1, " ", 1);
                while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
                    i++;
            }
            else if(str[i] && (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
                i++;
            if (str[i] == '\0')
                break;
        }
    }
    write(1, "\n", 1);
}
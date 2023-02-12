#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    if(*str)
        return(1 + ft_strlen(str + 1));
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *str = argv[1];
        char *new_str = malloc((ft_strlen(str) * sizeof(char)) + 1);
        int i = 0;
        int j = 0;
        while (str[i])
        {
            if (str[i] != '_' && str[i - 1] != '_')
                new_str[j++] = str[i++];
            else if (str[i] == '_' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                i++;
                str[i] -= 32;
                new_str[j++] = str[i++];
            }
        }
        int x = 0;
        while(new_str[x])
            write(1, &new_str[x++], 1);
        free(new_str);
    }
    write(1, "\n", 1);
    return (0);
}
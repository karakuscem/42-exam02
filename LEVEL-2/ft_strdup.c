#include <malloc.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    char *new_string = malloc(sizeof(char) * (i + 1));
    if (!new_string)
        return(NULL);
    i = 0;
    while (src[i])
    {
        new_string[i] = src[i];
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}
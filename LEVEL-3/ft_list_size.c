#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list != 0)
    {
        i++;
        begin_list = begin_list->next;
    }
    return (i);
}
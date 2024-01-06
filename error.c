#include "push_swap.h"

int error_1(char *str)
{
    if (str == NULL || *str == '\0')
        return (1);
    if (*str == '-' || *str == '+')
        str++;
    while (*str != '\0')
    {
        if (*str < '0' || *str > '9')
            return (1);
        str++;
    }
    return (0);
}

int error_2(stack *s, int number)
{
    if (!s)
        return (0);
    while (s)
    {
        if (s->value == number)
            return (1);
        s = s->next;
    }
    return (0);
}

void    free_stack(stack **s)
{
    stack *temp;
    while (*s != NULL)
    {
        temp = *s;
        *s = (*s)->next;
        free(temp);
    }
}

void    free_error(stack **s)
{
    free_stack(s);
    write(1, "error\n", 6);
    exit(1);
}
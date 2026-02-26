/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/stumper.h"

int line_len(char *str)
{
    int i = 0;

    for (; str[i] != '\0' || str[i] == '@'; i++);
    return i;
}

void algo(char **av, int rep)
{
    char **tab1 = my_str_to_word_array_delim(av[2], '@');
    char **tab2 = my_str_to_word_array_delim(av[3], '@');

    for (int i = 0; i < rep; i++)
        my_putstr(tab1[i]);
    for (int i = 0; i < rep; i++);
}

int main(int ac, char **av)
{
    int rep = 0;

    if (error_handling(ac, av))
        return 84;
    rep = string_to_int(av[1]);
    printf("%d\n", rep);
}

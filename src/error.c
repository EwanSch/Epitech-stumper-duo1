/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/stumper.h"

void free_tab(char **tab)
{
    if (!tab)
        return;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

static int line_break_verif(char **av, char c, int i)
{
    if (c == '@')
        if (av[3][i] != '@')
            return 1;
    return 0;
}

static int arg_verif(char **av)
{
    for (int i = 0; av[2][i] != '\0'; i++)
        if (line_break_verif(av, av[2][i], i))
            return 1;
    for (int i = 0; av[2][i] != '\0'; i++)
        if (av[2][i] != '#' && av[2][i] != '.' && av[2][i] != '@')
            return 1;
    for (int i = 0; av[3][i] != '\0'; i++)
        if (av[3][i] != '#' && av[3][i] != '.' && av[3][i] != '@')
            return 1;
    return 0;
}

static int letter_detect(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 1;
    return 0;
}

static int square_verif(char **av)
{
    char **tab = my_str_to_word_array_delim(av[2], '@');
    int len = my_strlen(tab[0]);

    for (int i = 1; tab[i] != NULL; i++)
        if (len != my_strlen(tab[i])){
            free_tab(tab);
            return 1;
        }
    free_tab(tab);
    return 0;
}

int error_handling(int ac, char **av)
{
    if (ac != 4)
        return 1;
    if (my_strlen(av[2]) != my_strlen(av[3]))
        return 1;
    if (letter_detect(av[1]))
        return 1;
    if (arg_verif(av))
        return 1;
    if (square_verif(av))
        return 1;
    return 0;
}

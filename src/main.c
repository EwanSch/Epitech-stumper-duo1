/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/stumper.h"

int main(int ac, char **av)
{
    int rep = 0;

    if (error_handling(ac, av))
        return 84;
    rep = string_to_int(av[1]);
    printf("%d\n", rep);
}

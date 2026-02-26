/*
** EPITECH PROJECT, 2026
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/stumper.h"

int letter_detect(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z'
            || str[i] >= 'a' && str[i] <= 'z')
            return 1;
    return 0;
}

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return 1;
    if (letter_detect(av[1])
        return 1;
}

int main(int ac, char **av)
{
    return 0;
}

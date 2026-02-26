/*
** EPITECH PROJECT, 2025
** string_utils
** File description:
** String utility functions
*/

#include <stdlib.h>
#include "my.h"

int tab_len(char **tab)
{
    int i = 0;

    if (!tab)
        return -1;
    for (; tab[i] != NULL; i++);
    return i;
}

int my_str_in_ascii(char *str)
{
    int result = 0;

    for (int i= 0; str[i] != '\0'; i++)
        result += (int)str[i];
    return result;
}

char *my_strncpy_nbr(char const *src, int n)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) - n + 1));

    if (dest == NULL)
        return NULL;
    for (int i = 0; src[i + n] != '\0'; i++) {
        dest[i] = src[i + n];
    }
    dest[my_strlen(src) - n] = '\0';
    return dest;
}

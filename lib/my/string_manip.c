/*
** EPITECH PROJECT, 2025
** string_manip
** File description:
** String manipulation functions
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *new_str = NULL;

    if (!str)
        return NULL;
    new_str = malloc(sizeof(char) * my_strlen(str) + 1);
    new_str[my_strlen(str)] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
        new_str[i] = str[i];
    return new_str;
}

long string_to_int(char *str)
{
    long result = 0;
    long expo = 0;

    for (int i = my_strlen(str) - 1; i >= 0; i--){
        result = result + (int)(str[i] - '0') * my_pow(10, expo);
        expo++;
    }
    return result;
}

char *my_strcat(char *dest, char const *src)
{
    int l = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++) {
        dest[l + i] = src[i];
    }
    dest[l + my_strlen(src)] = '\0';
    return dest;
}

char *my_revstr(char *str)
{
    char temp;
    int i = my_strlen(str);

    if (i <= 1) {
        return str;
    }
    i--;
    for (int y = 0; y < i; y++) {
        temp = str[y];
        str[y] = str[i];
        str[i] = temp;
        i--;
    }
    return str;
}

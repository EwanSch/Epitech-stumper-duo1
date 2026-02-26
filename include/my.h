/*
** EPITECH PROJECT, 2025
** my.h_2
** File description:
** my.h_2
*/

#include <stdarg.h>
#include <ncurses.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <math.h>
#include <stdio.h>
#include <stdarg.h>

#ifndef MY_H
    #define MY_H
struct arg_list {
    double nbr;
    char str[4];
    int expo;
};
struct float_list {
    char neg;
    long int entier;
    long int frac;
};
void my_putchar(char c);
char *my_strdup(char *str);
long string_to_int(char *str);
int tab_len(char **tab);
int my_isneg(int nb);
int my_put_nbr(long int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp2(char const *s1, char const *s2, int n);
int my_isnumeric(char nbr);
char *my_strcat(char *dest, char const *src);
char int_to_char(int nbr);
char *int_to_string(int nbr);
int my_nbrlen(long int nbr);
int my_pow(int nbr, int expo);
void my_putfloat(double nb);
int frac_cmpt(double nb);
int my_put_unsigned_nbr(unsigned int nb);
int my_isalpha(char arg);
char **my_str_to_word_array(char const *str);
int my_str_in_ascii(char *str);
char *my_strncpy_nbr(char const *src, int n);
char *my_ctime(double nbr);
char **my_put_in_alphabet(char **argv);
char **my_str_to_word_array_delim(char const *str, char delim);
char int_to_char(int nbr);
int char_to_int(char c);
int my_str_isnumeric(char *str);

#endif

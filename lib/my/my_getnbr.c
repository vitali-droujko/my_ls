/*
** EPITECH PROJECT, 2020
** mygetnbr
** File description:
** retrun a nb st as str
*/

int my_getnbr(char const *str)
{
    int pos = 1;
    int p;
    int nb = 0;
    int nchar = 0;
    for (p = 0; str[p] != '\0' && (str[p] <= 48 || str[p] > 57); p++) {
        if (str[p] == '-')
            pos *= -1;
    }
    if (str[p] == '\0')
        return (0);
    for (nchar = 0; str[p] != '\0' &&
    (str[p] <= 57 && str[p] >= 48); p++, nchar++) {
        if (((nb == 214748364 && str[p] - 48 > 7) || nb > 214748364  \
        || nchar > 10) && (pos == 1 || (pos == -1 && str[p] - 48 > 8)))
            return (0);
        nb = (nb * 10) + (str[p] - 48);
    }
    return (nb * pos);
}

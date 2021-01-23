/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** disp id
*/

#include "my.h"

void disp_f(int flag, char *way)
{
    int i = 0, j = 0;
    struct stat sb;
    char name[256];

    while (i < my_strlen(way)) {
        if (way[i] == '/')
            j = 0;
        name[j++] = way[i++];
    }
    name[j] = '\0';
    my_revstr(name);
    name[my_strlen(name) - 1] = '\0';
    my_revstr(name);
    if (lstat(way, &sb) == - 1)
        error();
    part(flag, name, sb);
}
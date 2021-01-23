/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** choose flag
*/

#include "my.h"

void part(int flag, char *name, struct stat sb)
{
    switch (flag) {
        case 0:
            (name[0] != '.') ? NAMESPACE : 0;
            break;
        case 1:
            NAMESPACE;
            break;
        case 2:
            (name[0] != '.') ? info(sb, name), SPACE, NAME, JUMP : 0;
            break;
        case 3:
            info(sb, name), SPACE, NAME, JUMP;
            break;
    }
}
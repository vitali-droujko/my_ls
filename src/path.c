/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "my.h"

void pont(plan_t *plan, char *temp)
{
    int i, j;
    for (i = 0; i < plan->k - 1; i++) {
        for (j = 0; j < plan->k-1-i; j++) {
            if (my_strcmp(plan->tab[j], plan->tab[j + 1]) > 0) {
                my_strcpy(temp, plan->tab[j + 1]);
                my_strcpy(plan->tab[j + 1], plan->tab[j]);
                my_strcpy(plan->tab[j], temp);
            }
        }
    }
}
/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** file.c
*/

#include "my.h"

int main(int ac, char **av)
{
    struct stat sb;
    plan_t *plan;
    plan = malloc(sizeof(plan_t));
    cont(ac, av, plan), cont2(av, plan), cont3(ac, plan);
    for (int i = 1; i < ac; ) {
        if (av[i][0] == '-')
            i++;
        else {
            my_strcpy(plan->path, av[i]);
            (stat(plan->path, &sb) == -1) && (error(), 0);
            if (S_ISDIR(sb.st_mode)) {
                if (plan->path[my_strlen(av[i]) - 1] != '/')
                    A1 = '/', A2 = '\0';
                else
                    A1 = '\0';
                disp_d(plan);
            } else
                disp_f(plan->flag, plan->path);
            i++;
        }
    }
    return 0;
}
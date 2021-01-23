/*
** EPITECH PROJECT, 2020
** my_os
** File description:
** Untitled-1
*/

#include  "my.h"

void cont(int ac, char **av, plan_t *plan)
{
    plan->param = malloc(sizeof(char) * 32);
    plan->path = malloc(sizeof(char) * 4096);
    plan->num = 0;
    plan->flag = 0;
    plan->j = 0;
    int i, k;
    for (i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            for (k = 1; k < my_strlen(av[i]); k++, plan->j++)
                plan->param[plan->j] = av[i][k];
            plan->num++;
        }
    }
}

void cont2(char **av, plan_t *plan)
{
    int i;
    for (i = 0; i < plan->j; i++) {
        if (plan->param[i] == 'a')
            plan->flag = plan->flag | 1;
        else if (plan->param[i] == 'l')
            plan->flag = plan->flag | 2;
        else
            error();
    }
    plan->param[plan->j] = '\0';
}

int cont3(int ac, plan_t *plan)
{
    if ((plan->num + 1) == ac) {
        my_strcpy(plan->path, "./");
        plan->path[2] = '\0';
        disp_d(plan);
        return 0;
    }
}

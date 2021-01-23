/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "my.h"

void disp_d(plan_t *plan)
{
    DIR *dir;
    struct dirent *d;
    struct stat sb;
    char temp[4096];
    dir = opendir(plan->path);
    (dir == NULL) && (error(), 0);
    for ( ; (d = readdir(dir)) != NULL; plan->k++) { }
    closedir(dir);
    (plan->k > 256) && (error(), 0);
    dir = opendir(plan->path);
    for (int i = 0; i < plan->k; i++) {
        d = readdir(dir);
        (d == NULL) && (error(), 0);
        my_strncpy(plan->tab[i], plan->path, my_strlen(plan->path));
        my_strcat(plan->tab[i], d->d_name);
    }
    pont(plan, temp);
    for (int i = 0; i < plan->k; i++)
        disp_f(plan->flag, plan->tab[i]);
    ((plan->flag == 1) || (plan->flag == 0)) && JUMP;
}
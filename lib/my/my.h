/*
** EPITECH PROJECT, 2020
** myh
** File description:
** myh
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>

#ifndef MY_H_
#define MY_H_

typedef struct plan_s
{
    char *path;
    char *param;
    int num;
    int flag;
    int k;
    char tab[256][4096];
    int j;
    int stock;
} plan_t;

int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
char *my_strcat(char *, char  const *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);
char *my_strdup(char const *);
int my_pow(int, int);
void my_swapmodifa(int *, int *);
char lettera(int);
void cont(int ac, char **av, plan_t *plan);
void cont2(char **av, plan_t *plan);
int cont3(int ac, plan_t *plan);
void pont(plan_t *plan, char *temp);
void error(void);
void info(struct stat sb, char *name);
void disp_f(int flag, char *way);
void disp_d(plan_t *plan);

#define SPACE write(1, " ", 1)
#define JUMP write(1, "\n", 1)
#define NAME my_putstr(name)
#define UID_NAME my_putstr(psd->pw_name)
#define GID_NAME my_putstr(grp->gr_name)
#define NB_LINK my_put_nbr(sb.st_nlink)
#define SIZE my_put_nbr(sb.st_size)
#define TIME my_putstr(sb_time)
#define ISREG ((S_ISREG(sb.st_mode)) ? my_putchar('-') : 0)
#define ISDIR ((S_ISDIR(sb.st_mode)) ? my_putchar('d') : 0)
#define ISCHR ((S_ISCHR(sb.st_mode)) ? my_putchar('c') : 0)
#define ISBLK ((S_ISBLK(sb.st_mode)) ? my_putchar('b') : 0)
#define ISFIFO ((S_ISFIFO(sb.st_mode)) ? my_putchar('p') : 0)
#define ISLNK ((S_ISLNK(sb.st_mode)) ? my_putchar('l') : 0)
#define ISSOCK ((S_ISSOCK(sb.st_mode)) ? my_putchar('s') : 0)
#define IRUSR ((sb.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-'))
#define IWUSR ((sb.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-'))
#define IXUSR ((sb.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-'))
#define IRGRP ((sb.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-'))
#define IWGRP ((sb.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-'))
#define IXGRP ((sb.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-'))
#define IROTH ((sb.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-'))
#define IWOTH ((sb.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-'))
#define IXOTH ((sb.st_mode & S_IXOTH) ? my_putchar('x') : my_putchar('-'))
#define REV my_revstr(sb_time)
#define NAMESPACE my_putstr(name), write(1, " ", 1)
#define A1 plan->path[my_strlen(av[i])]
#define A2 plan->path[my_strlen(av[i]) + 1]

#endif /* MY_H_ */



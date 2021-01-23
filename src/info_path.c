/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** info
*/

#include "my.h"

void info(struct stat sb, char *name)
{
    char sb_time[32];
    struct passwd *psd;
    struct group *grp;

    psd = getpwuid(sb.st_uid);
    grp = getgrgid(sb.st_gid);
    ISREG, ISDIR, ISCHR, ISBLK, ISFIFO, ISLNK, ISSOCK;
    IRUSR, IWUSR, IXUSR, IRGRP, IWGRP, IXGRP, IROTH, IWOTH, IXOTH, SPACE;
    NB_LINK, SPACE;
    UID_NAME, SPACE;
    GID_NAME, SPACE;
    SIZE, SPACE;
    my_strcpy(sb_time, ctime(&sb.st_mtime));
    REV, sb_time[my_strlen(sb_time) - 4] = '\0';
    REV, sb_time[my_strlen(sb_time) - 9] = '\0';
    my_strcpy(sb_time, my_strlowcase(sb_time));
    TIME;
}
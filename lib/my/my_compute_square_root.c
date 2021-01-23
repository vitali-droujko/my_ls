/*
** EPITECH PROJECT, 2020
** square root
** File description:
** return square of nb
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    while (i * i != nb) {
        i++;
        if (i * i > nb)
            return (0);
    }
    return (i);
}

/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** check_map
*/

#include "map.h"

int check_open(int fd)
{
    if (fd == (-1))
        exit(84);
    return fd;
}

void check_char(char *s)
{
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '#' && s[i] != 'X' &&
        s[i] != 'O' && s[i] != 'P') {
            write(2, "Invalid data in the map\n", 24);
            exit(84);
        }
        i++;
    }
}

void check_map(char *s)
{
    int player = 0;
    int i = 0;

    while (s[i] != '\0') {
        (s[i] == 'P') ? player++ : 0;
        i++;
    }
    if (player != 1) {
        write(2, "Invalid number of player\n", 25);
        exit(84);
    }
}

char *manage_map(char *s)
{
    int fd = check_open(open(s,O_RDONLY));
    struct stat fdata;
    char *buffer = NULL;

    stat(s, &fdata);
    buffer = malloc(sizeof(char) * (fdata.st_size + 1));
    read(fd, buffer, fdata.st_size);
    buffer[fdata.st_size] = '\0';
    check_char(buffer);
    check_map(buffer);
    close(fd);
    return buffer;
}
/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-emilie.baunifais
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char *ref, char *cmp)
{
    int size_ref = my_strlen(ref);
    int size_cmp = my_strlen(cmp);

    if (size_ref != size_cmp)
        return 1;
    for (int i = 0; ref[i] != '\0' && cmp[i] != '\0'; i++) {
        if (ref[i] != cmp[i]) {
            return 1;
        }
    }
    return 0;
}
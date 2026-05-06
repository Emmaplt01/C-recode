/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 2 ex strcpy main
 * created on:  2025-11-01 - 17:24 +0100
 * 1st author:  emma.ploton
 * description: main fucntio of stu_strcpy
 */

#include <stdio.h>
#include <stdlib.h>

char *stu_strcpy(char *dest, const char *src);

int main(void)
{
    char *str_a;

    str_a = malloc(7 * sizeof (char));
    if (!str_a)
        return 1;
    puts(stu_strcpy(str_a, "hello!"));
    str_a[0] = 'b';
    str_a[4] = 'a';
    puts(str_a);
    return (0);
}

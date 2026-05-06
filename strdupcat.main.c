/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 strdupcat main
 * created on:  2025-11-05 - 11:52 +0100
 * 1st author:  emma.ploton
 * description: main function of strdupcat
 */

#include <stdio.h>
#include <stdlib.h>

char *strdupcat(char *str1, const char *str2);

int main(void)
{
    char *str = strdupcat("abc", "def");
    puts(str);
    free(str);
}

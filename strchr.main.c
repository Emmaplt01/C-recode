/*
 * project: Chapitre 3 strchr main
 * created on:  2025-11-02 - 12:43 +0100
 * 1st author:  emma.ploton
 * description: main function of stu_strchr
 */

#include <stdio.h>

const char *stu_strchr(const char *str, char c);

int main(void)
{
    const char *str;
    char c;

    str = "flower";
    c = 'o';
    if (stu_strchr(str, c) == 0) {
        printf("Le caractère : %c n'est pas dans la chaine de caractères : %s\n", c, str);
    } else {
        printf("Le caractère : %c est dans la chaine de caractères : %s\n", c, str);
    }
}

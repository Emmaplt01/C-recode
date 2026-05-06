/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strcat main
 * created on:  2025-11-03 - 21:38 +0100
 * 1st author:  emma.ploton
 * description: main function of stu_strcat
 */

#include <stdio.h>
#include <stdlib.h>

char *stu_strcpy(char *dest, const char *src);

char *stu_strcat(char *str1, const char *str2);

int main(void)
{
    char *str1 = malloc(sizeof (char) * 7);
    if (!str1) {
        return 1;
    }
    stu_strcpy(str1, "abc");
    char *str2 = "def";
    puts(stu_strcat(str1, str2));
}

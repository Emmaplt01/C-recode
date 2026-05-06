/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strdup main
 * created on:  2025-11-03 - 17:09 +0100
 * 1st author:  emma.ploton
 * description: main function of stu_strdup
 */
#include <stdio.h>


unsigned int stu_strlen(const char *);

char *stu_strdup(const char *str);

int main(void)
{
    const char *str;

    str = "flower";
    printf("Chaine de début: %s\n", str);
    printf("Copie: %s\n", stu_strdup(str));
}

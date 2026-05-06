/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strcmp main
 * created on:  2025-11-01 - 18:42 +0100
 * 1st author:  emma.ploton
 * description: main function of strcmp
 */
#include <stdio.h>

int stu_strcmp(const char *s1, const char *s2);

int main(void)
{
    const char *s1;
    const char *s2;

    s1 = "flower";
    s2 = "flower";
    if (stu_strcmp(s1, s2) == 0) {
        printf("Les 2 chaînes sont identiques: %s\n", s1);
    } else {
        printf("Les 2 chaînes sont différentes %s, %s\n", s1, s2);
    }
}

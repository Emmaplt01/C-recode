/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strlen main
 * created on:  2025-11-01 - 12:49 +0100
 * 1st author:  emma.ploton
 * description: main fucntion of stu_strlen
 */
#include <stdio.h>

unsigned int stu_strlen(const char *str);

int main(void)
{
    const char *str;
    int i;

    str = "hello";
    i = stu_strlen(str);
    if (i == 5) {
        printf("Nombre de caractères: %d\n", i);
    } else {
        return 0;
    }
}

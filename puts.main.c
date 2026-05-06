/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex puts
 * created on:  2025-11-03 - 09:23 +0100
 * 1st author:  emma.ploton
 * description: main function of stu_puts
 */

#include <stdio.h>
#include <unistd.h>

unsigned int stu_strlen(const char *str);
int stu_puts(const char *str);

int main(void)
{
    int len;
    const char *str;

    str = "flower";
    len = stu_puts(str);
    if (len != -1) {
        printf("Nombre de caractères: %d\n", len);
    }
}

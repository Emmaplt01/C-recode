/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strdup
 * created on:  2025-11-03 - 17:04 +0100
 * 1st author:  emma.ploton
 * description: function that takes a string as parameter, allocates memory, copies the string passed as parameter into it
 */
#include <stdlib.h>

unsigned int stu_strlen(const char *str);

char *stu_strdup(const char *str)
{
    int i;

    i = 0;
    char *dest = malloc(stu_strlen(str) + 1);
    if (dest == NULL) {
        return NULL;
    }
    while (str[i] != '\0') {
        dest[i] = str[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return dest;
}

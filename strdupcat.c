/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strdupcat
 * created on:  2025-11-05 - 11:53 +0100
 * 1st author:  emma.ploton
 * description: function that takes two strings as parameters, allocates a memory area large enough to store these two strings and a null terminator there, and copies the content of the two strings.
 */

#include <stdlib.h>
#include <string.h>

char *stu_strcat(char *str1, const char *str2);
char *stu_strcpy(char *dest, const char *src);
unsigned int stu_strlen(const char *str);

char *strdupcat(char *str1, const char *str2)
{
    char *box;

    box = malloc(sizeof (char) * (strlen(str1) + strlen(str2) + 1));
    stu_strcpy(box, str1);
    stu_strcat(box, str2);
    return box;
}

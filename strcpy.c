/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strcpy
 * created on:  2025-11-01 - 17:37 +0100
 * 1st author:  emma.ploton
 * description: function that copies the source string into a destination memory space.
 */

char *stu_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return dest;
}

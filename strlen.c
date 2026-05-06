/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strlen
 * created on:  2025-10-29 - 16:20 +0100
 * 1st author:  emma.ploton
 * description: function that returns the number of useful characters of a string.
 */

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (*str != '\0') {
        i = i + 1;
        str = str + 1;
    }
    return i;
}

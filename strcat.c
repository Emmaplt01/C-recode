/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strcat
 * created on:  2025-11-03 - 21:38 +0100
 * 1st author:  emma.ploton
 * description: function that copies the content of the second channel and puts it after the first one.
 */

char *stu_strcat(char *str1, const char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i] != '\0') {
        i = i + 1;
    }
    while (str2[j] != '\0') {
        str1[i + j] = str2[j];
        j = j + 1;
    }
    str1[i + j] = '\0';
    return str1;
}

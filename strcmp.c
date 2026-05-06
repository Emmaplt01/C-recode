/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strcmp
 * created on:  2025-11-01 - 18:41 +0100
 * 1st author:  emma.ploton
 * description: function that compares two strings of characters
 */

int stu_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i]) {
        i = i + 1;
        if (s1[i] == '\0' && s2[i] == '\0') {
            return 0;
        }
    }
    return 1;
}

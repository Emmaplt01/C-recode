/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex atoi
 * created on:  2025-11-01 - 18:12 +0100
 * 1st author:  emma.ploton
 * description: function that takes a character string as parameter and returns an int
 */

int stu_atoi(const char *str)
{
    int neg;
    int result;
    int i;

    i = 0;
    result = 0;
    neg = 0;
    if (str[0] == '\0') {
        return 0;
    }
    if (str[0] == '-') {
        neg = 1;
        i = 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i = i + 1;
    }
    if (neg == 1) {
        return -result;
    } else {
        return result;
    }
}

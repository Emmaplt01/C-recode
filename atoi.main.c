/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex atoi main
 * created on:  2025-11-01 - 17:59 +0100
 * 1st author:  emma.ploton
 * description: Main function of stu_atoi
 */

#include <stdio.h>

int stu_atoi(const char *);

int main(void)
{
    int result;

    result = stu_atoi("123");
    printf("%d\n", result);
    result = stu_atoi("123abc");
    printf("%d\n", result);
    result = stu_atoi("-123");
    printf("%d\n", result);
    result = stu_atoi("");
    printf("%d\n", result);
}

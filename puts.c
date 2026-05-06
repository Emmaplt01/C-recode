/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex stu_puts
 * created on:  2025-11-01 - 13:23 +0100
 * 1st author:  emma.ploton
 * description: Function that displays the received character string as a parameter, followed by a newline and returns the number of characters it printed.
 */
#include <unistd.h>

unsigned int stu_strlen(const char *str);

int stu_puts(const char *str)
{
    int len;

    len = stu_strlen(str);
    if (write(1, str, len) == -1) {
        return -1;
    }
    write(1, "\n", 1);
    return len + 1;
}

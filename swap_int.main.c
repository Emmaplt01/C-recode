/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex Interversion mains
 * created on:  2025-10-29 - 14:49 +0100
 * 1st author:  emma.ploton
 * description: main function of swap_int
 */

#include <stdio.h>

void swap_int(int *tata, int *toto);

int main(void)
{
    int tata;
    int toto;

    tata = 4;
    toto = 9651265;
    swap_int(&tata, &toto);
    if (tata == 9651265 && toto == 4) {
        puts("vous avez réussi");
    } else {
        puts("c'est le flop");
    }
    return (0);
}

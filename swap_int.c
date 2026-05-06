/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 2 ex Intervertion
 * created on:  2025-10-29 - 14:51 +0100
 * 1st author:  emma.ploton
 * description: function that takes 2 pointers on integers as parameters and interchanges the pointed values
 */

void swap_int(int *tata, int *toto)
{
    int box;

    box = *tata;
    *tata = *toto;
    *toto = box;
}

// Dato N un numero intero positivo, generare e visualizzare in ordine
// crescente i numeri pari minori o uguali a N.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, n = 0;
    do
    {
        printf("Inserire un numero intero positivo\n");
        scanf("%d", &x);
    } while (x < 0);

    while (n < x)
    {
        printf("\n%d", n);
        n += 2;
    }

    return 0;
}
// Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
// visualizzare in ordine crescente i numeri interi compresi
// nell'intervallo chiuso [N1,N2].
#include <stdio.h>

int main(int argc, char *argv[])
{
    int min, max;

    do
    {
        printf("Inserire il numero intero positivo maggiore\n");
        scanf("%d", &max);
    } while (max < 0);

    do
    {
        printf("Inserire il numero intero positivo minore\n");
        scanf("%d", &min);
    } while (min < 0);

    while (min < max)
    {
        printf("\n%d", min);
        min++;
    }

    return 0;
}
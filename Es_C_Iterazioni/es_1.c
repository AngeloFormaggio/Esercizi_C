// Dato N un numero intero positivo, generare e visualizzare il numero
// successivo.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    do
    {
        printf("Inserire un numero intero positivo\n");
        scanf("%d", &x);
    } while (x < 0);
    x++;
    printf("Il valore successivo è %d", x);

    return 0;
}
#include <stdio.h>

int main()
{
    int x;
    int *xptr;

    xptr = &x;

    printf("\nEscreva o valor do conteudo de x: ");
    scanf("%d", *xptr);

    printf("\nValor de *xptr: %d\n\n", *xptr);

    return (0);
}
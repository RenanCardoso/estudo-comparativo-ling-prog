#include <stdio.h>

int main()
{
    int x = 10;
    int *ponteiro;

    ponteiro = &x;

    x = 20;

    int y = 20;
    // este ponteiro apontou no endereco de memoria de x e falou que o valor contido(conteudo) de x será
    // igual ao valor de y
    *ponteiro = y;

    printf("\n %d, %d\n\n", x, y);
    
    return (0);
}
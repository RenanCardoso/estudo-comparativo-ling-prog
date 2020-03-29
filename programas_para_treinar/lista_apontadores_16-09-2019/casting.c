#include <stdio.h>

// usando casting em c

int main (){

    int x = 16;
    int y = 3;

    // ao fazer isso o C entenderá que a divisao de x e y retornara um valor inteiro, mesmo
    // que resultado seja float
    // float resultado = x / y;

    // usando casting, ou seja, fazer com que o C entenda que a divisao de x e y mesmo eles
    // sendo inteiros, retorne um resultado em float
    float resultado = (float) x / y;

    printf("%f\n", resultado);

    return 0;
}
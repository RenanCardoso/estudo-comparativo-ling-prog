#include <stdio.h>

int main()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("\nEndereco de x: %d, conteudo de x: %d\n\n", pX, *pX);
    printf("\nEndereco de y: %d, conteudo de y: %f\n\n", pY, *pY);
    printf("\nEndereco de z: %d, conteudo de z: %c\n\n", pZ, *pZ);

    // o ponteiro *pX está apontando para o conteudo de x, ou seja, em *pX está a mesma 
    // coisa que está em x. O mesmo serve para *pY
    double soma = *pX + *pY;
    // no caso acima esta acontecendo a mesma coisa que x + y, pois estamos somando os conteudos dos ponteiros

    // se fizer da forma abaixo irá dar um erro pois não é possível somar dois enderecos de memoria
    // double soma = pX + pY;
    // quando não coloca o asterisco é a mesma coisa que &x + &y

    printf("\nSoma: %f\n\n", soma);

    int *resultado; 

    // descobrindo o endereco de memoria de x
    // resultado = &x;  
    // usando o ponteiro para apontar para o endereco fisico de memoria de x
    resultado = -123061676;

    
    // imprimindo o conteudo do ponteiro
    printf("\nResultado: %d\n\n", *resultado);


    return (0);
}
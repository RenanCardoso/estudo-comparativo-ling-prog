#include <stdio.h>

int main()
{
    int x;
    double y = 20.50;
    char z = 'a';

    // existem duas formas de usar um ponteiro. A primeira é: 
    // em uma linha informamos o nome do ponteiro onde ele estará apontando
    int *pX;
    // e na outra o endereco de memoria
    pX = &x;
    // quando inserimos um ponteiro sem o asterisco quer dizer que queremos acessar o endereco deste ponteiro

    // ou assim:
    int *pX = &x;

    


    return (0);
}
#include <stdio.h>

int main(void){
    
    int x;
    x = 10;

    int *ponteiro;

    // desta forma o ponteiro acessa o conteudo da variavel
    ponteiro = x;

    // o ponteiro ira acessar o endereco de memoria da variavel x
    ponteiro = &x;

    // imprime o conteudo do ponteiro, ou seja, o que contém dentro do ponteiro, que neste caso como está
    // apontando para o endereço de x, é o mesmo que imprimir o conteudo de x
    printf("\n%d\n", *ponteiro);

    // se colocar o ponteiro sem o asterisco entao voce estara acessando o endereco de memoria do ponteiro
    printf("\n%d\n", ponteiro);

    return 0;
}
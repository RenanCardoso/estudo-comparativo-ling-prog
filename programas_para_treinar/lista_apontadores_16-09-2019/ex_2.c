/*
 * Com base nos conhecimentos de ponteiros faça um código com:
 * • Uma variável ‘v1’ do tipo int;
 * • Um ponteiro “p” para o tipo int;
 * • Aponte ‘p’ para a variável ‘v1’;
 * • Salve um valor na variável ‘v1’;
 * • Exiba a variável ‘v1’;
 * • Exiba o endereço de ‘v1’;
 * • Exiba a variável ‘p’;
 * • Exiba o endereço da variável ‘p’;
 * • Exiba o conteúdo do endereço apontado por ‘p’;
 */
#include <stdio.h>
#include <string.h>

int main(void){

    int v1;
    int *p;

    v1 = 10;
    p = v1;

    printf("Variavel v1: %d\n", v1);
    printf("Endereco de v1: %d\n", &v1);
    printf("Variavel p: %d\n", p);
    printf("Endereco de p: %d\n", &p);
    printf("Conteudo do ponteiro de p: %d\n", p);





    return 0;
}
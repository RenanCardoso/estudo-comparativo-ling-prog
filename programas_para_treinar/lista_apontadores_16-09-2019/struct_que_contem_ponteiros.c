#include <stdio.h>

int main(void){

    struct horario
    {
        int *pHora;
        int *pMinuto;
        int *pSegundo;

    };

    struct horario hoje;

    int hora = 10;
    int minuto = 20;
    int segundo = 30;

    // para acessar um membro ponteiro de uma struct deve apontar para o endereço de memória da seguinte forma:
    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    // para conseguir o valor dos ponteiros que são membros de uma struct que não é um ponteiro basta fazer assim:
    printf("\nHora: %d\n", *hoje.pHora);
    printf("Minuto: %d\n", *hoje.pMinuto);
    printf("Segundo: %d\n", *hoje.pSegundo);
    
    // acima aprendemos como acessar o conteudo da memoria do ponteiro

    // alterando o conteudo dos meus ponteiros da struct, com asterisco estou acessando o valor, 
    // sem o asterisco acessa o endereco de memoria
    *hoje.pHora = 100;
    *hoje.pMinuto = 200;
    *hoje.pSegundo = 300;

    printf("\nHora: %d\n", *hoje.pHora);
    printf("Minuto: %d\n", *hoje.pMinuto);
    printf("Segundo: %d\n", *hoje.pSegundo);

    return 0;
}
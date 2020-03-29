#include <stdio.h>

int main(void){

    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    // o ponto . na linguagem C ele vem considerado primeiro em ordem de execução do que o asterísco *
    // se fizer como está abaixo o compilador do C irá entender: *(depois.hora) = 20;  
    // *depois.hora = 20;

    // uma das maneiras de acessar um ponteiro do tipo struct é assim:
    (*depois).hora = 20;
    (*depois).minuto = 20;
    (*depois).segundo = 20;

    printf("\n %d:%d:%d \n\n", agora.hora, agora.minuto, agora.segundo);

    // outra maneira seria essa:
    depois->hora = 40;
    depois->minuto = 40;
    depois->segundo = 40;

    // essa outra forma só serve para alterar o conteúdo de um ponteiro do tipo struct

    printf("\n %d:%d:%d \n\n", agora.hora, agora.minuto, agora.segundo);

    return 0;
}
#include <stdio.h>

// Verifique o programa abaixo. Encontre o seu erro e corrija-o para que escreva o número 10 na tela.

int main()
{ 
    int x, *p, **q;
    
    p = &x;
    q = &p;
    x = 10;
    
    printf("\n%d\n", **q);
 
    return(0);
}
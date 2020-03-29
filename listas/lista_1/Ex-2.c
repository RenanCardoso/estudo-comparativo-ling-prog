#include <stdio.h>

void swap(int *, int *);

int main(void){

	int *a, *z;

	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);

	printf("Digite o segundo numero: \n");
	scanf("%d", &z);

	printf("Os numeros digitados: %d e %d\n", a, z);
	swap(&a, &z);

	printf("Os numeros depois da troca: %d e %d\n", a, z);


	return 0;
}

void swap(int *a, int *z){

	int aux;

	aux = *a;
	*a = *z;
	*z = aux;

}

#include <stdio.h>

int NumDigits(int);

int main(void){

	int num, retorno;

	printf("Insira um numero: \n");
	scanf("%d", &num);

	retorno = NumDigits(num);

	printf("Retorno: %d\n", retorno);

}

int NumDigits(int n){

	if (n / 10 == 0){
		return 1;		
	} else {
		return (1 + NumDigits(n / 10));
	}

}
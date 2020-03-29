#include <stdio.h>

void misterio(int cont);

int main(void){

	misterio(0);
	system("PAUSE");

	return 0;
}

void misterio(int cont){
	if (cont < 5)
	{
		printf("Valor do parametro antes da chamada = %d\n", cont);
		printf("valor cont = %d\n", cont);
		misterio(cont+1);
		printf("Valor do parametro depois da chamada = %d\n", cont);

	}


}

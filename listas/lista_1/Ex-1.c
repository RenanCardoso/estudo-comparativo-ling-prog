#define N_ELEMS 6
#include <stdio.h>

int main(void)
{
	int array[N_ELEMS];
	int i;

	for (i = 0; i < N_ELEMS; ++i){
		// está gravando os números no array
		array[i] = i;
	}

	// printa o endereco de memoria
	printf("%i\n", array);

	for (i = 0; i < N_ELEMS-1;){
		array[++i]++;
	}

	for (i = 0; i < N_ELEMS;++i){
		printf("%d\n", array[i]);		
	}

	return 0;
}
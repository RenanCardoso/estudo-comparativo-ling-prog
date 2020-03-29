#include <stdio.h>

int main(void){

	char strA[80] = "String exemplo";
	char strB[80] = "01234567890123456789";

	// aqui está criando ponteiro de a
	char *pA;
	// aqui está criando ponteiro de b
	char *pB;

	/* aqui está atribuindo a string do vetor de caracteres strA para o conteúdo do 
	 * ponteiro de caracteres pA.
	 */
	pA = strA;

	printf("String a: %s\n", pA);

	/* aqui está atribuindo a string do vetor de caracteres strB para o conteúdo do 
	 * ponteiro de caracteres pB.
	 */
	pB = strB;
	printf("String b inicial: %s\n", pB);

	/* Aqui está percorrendo a string que foi atribuida para o conteúdo do
	 * ponteiro pA até que ela chegue ao final. E dentro do laço está atribuindo 
	 * o caractere contido no conteúdo do ponteiro pA para o conteúdo do ponteiro pB.
	 */
	while(*pA != '\0'){
		*pB++ = *pA++;
		printf("String b parcial: %s\n", pB);
	}

	*pB = '\0';
	printf("String b final: %s\n", pB);

	return 0;
}
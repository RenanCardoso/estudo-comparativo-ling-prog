#include <stdio.h>

int x = 10;

int f(int, int);
int g(int, int);
int h(int);


int main(void){

	int y, z;

	printf("Insira o valor de y: \n");
	scanf("%d", &y);

	printf("Insira o valor de z: \n");
	scanf("%d", &z);


}

int f(int y, int z){
	int v;
	v = v + z;

	return v;
}

int g(int y, int z){
	int w;
	if (z == 0)	{
		w = f(y, x);		
	} else {
		w = g(y, z-1) + x;
	}

	return w;
}

int h(int x){
	int y;
	int u;
	y = x + 1;
	u = g(y, x);

	return u;	
}
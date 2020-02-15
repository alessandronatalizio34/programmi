#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int somma,numero,conta;
	float media;
	somma=0;
	conta=0;
	media=0.00;
	do{
		printf("dammi il %d  del numero pari",conta+1);
		scanf("%d",&numero);
	} while(numero%2!=0)
	
	while(numero!=0)
	{
		somma=somma+numero;
		conta=conta+1;
	}
	do{
		printf("dammi il %d del numeri pari",conta+1);
		scanf("%d",&numero);
	}  while(numero%2!=0)
}
	media=somma/conta;
	printf("somma %d",somma);
	printf("media %d",media);
	
	return 0;
}
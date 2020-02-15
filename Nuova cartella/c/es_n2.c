#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//leggere una sequenza di numeri pari fino a che non si legge zero calcolare la somma e la media e visualizzare
int main(int argc, char *argv[]) {
	int somma,numero,conta;
	float media;
	somma=0;
	conta=0;
	media=0.00;
	do{
		printf("numero");
		scanf("%d",&numero);
	}while(numero%2!=0);
	
	while(numero!=0)
	{
		
		somma=somma+numero;
		conta=conta+1;
		do{
		     printf("numero");
		     scanf("%d",&numero);
	      }while(numero%2!=0);
	}
	somma=somma+numero;
	media=(float)somma/conta;
	printf("\nmedia %6.2f",media);
	printf("\nsomma %d",somma);
	return 0;
}
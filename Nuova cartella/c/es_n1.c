#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//leggere da tastiera n  numeri positivi calcolare la somma e la media e visualizzare

int main(int argc, char *argv[]) {
		int N,conta,somma,num;
	float media;
	conta=0;
	somma=0;
	do {
		printf("quanti nun devo elaborare");
		scanf("%d",&N);
	} while (N==0);
	
	while(conta<N)
	{
		do{
			printf("dammi un numero");
			scanf("%d",&num)
		}while(num<=0)
		conta=conta+1;
		somma=somma+num;
	}
	media=(float)somma/conta;
	printf("la media %f",media);
	printf("somma %d",somma);
	
	return 0;
}
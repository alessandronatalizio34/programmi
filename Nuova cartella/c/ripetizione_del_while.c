#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero,somma,conta;
	float media;
	char risposta;
	risposta='s';
	somma=0;
	conta=0;
	media=0.00;
	while(risposta=='s')
	{
		printf("dammi un numero");
		scanf("%d",&numero);
		somma=somma+numero;
		conta=conta+1;
		fflush(stdin);
		printf("ci sono altri numeri?");
		scanf("%c",&risposta);
		}
		media=somma/conta;
		printf("media %f",media);
		printf("somma %d",somma);
		
			
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// scrivi un programma che legge un numero num e quindi succesivamente esegue la somma di num interi inseriti dall utente

int main(int argc, char *argv[]) {
    int numero,somma,conta;
    somma=0;
    conta=0;
    printf("numero");
    scanf("%d",&numero);
    while(numero!=0)
    {
    	
    	somma=somma+numero;
    	 printf("numero");
    scanf("%d",&numero);
    	
    	conta=conta+1;
	}
	printf("la somma vale %d",somma);
	return 0;
}
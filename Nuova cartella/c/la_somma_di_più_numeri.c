#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// IL PROGRAMMA FUNZIONA SE VI DICE	[Warning] unknown escape sequence: '\040' NON VI PREOCUPATE  BASTA FARE COMPILA ED ESEGUI

int main(int argc, char *argv[]) {
    int contatore, somma, numero, i;
    
    do{
    	printf("\n dimmi quanti numeri devo sommare");
    	scanf("%d",&contatore);
	}while(contatore<=0);
	
	i=0;
	somma=0;
	do {
		printf("\n dammi un numero");
		scanf("%d",&numero);
		somma=somma+numero;
		i=i+1;
	}while(i<contatore);
	printf("\ la somma vale = %d",somma);
	
	return 0;
}
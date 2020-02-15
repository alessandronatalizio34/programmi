#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int resto;
int risultato;
int div;
int dividendo;
int divisore;
printf("inserisci il dividendo");
scanf("%d",&dividendo);
printf("inserisci il divisiore");
scanf("%d",&divisore);
resto=dividendo%divisore;
div=dividendo-resto;
risultato=div/divisore;
printf("la divisione con resto e %d",resto,risultato,div,dividendo,divisore);
	return 0;
}
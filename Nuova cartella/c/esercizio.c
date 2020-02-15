#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//scrivi un programma che legge due numeri reali e ne somma le parti intere e quelle decimali visualizzando sullo schermo i risultati parziali e quindi il risultato totale//

int main(int argc, char *argv[]) {
float a,b,tot;
printf("numero 1");
scanf("%f",&a);
printf("secondo numero");
scanf("%f",&b);
tot=a+b;
printf("il totale e %6.2f",a,b,tot);
	return 0;
}
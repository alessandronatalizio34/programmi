#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int ore,minuti,secondi,tot_sec,a,b;
printf("ore");
scanf("%d",&ore);
printf("minuti");
scanf ("%d",&minuti);
printf("secondi");
scanf("%d",&secondi);
a=minuti*60;
b=ore*3600;
tot_sec=secondi+a+b;
printf("il valore totale in secondi vale %d",tot_sec);

	return 0;
}
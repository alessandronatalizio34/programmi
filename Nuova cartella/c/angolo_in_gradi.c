#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int G,P,S;
	int ampiezza;
	printf("gradi");
	scanf ("%d",&G);
	printf("primi");
	scanf("%d",&P);
	printf("secondi");
	scanf("%d",&S);
	ampiezza=(G*60*60)+(P*60)+S;
	printf("l ampiezza dell angolo espressa in secondi vale %d",ampiezza);
	

	
	
	
	return 0;
}
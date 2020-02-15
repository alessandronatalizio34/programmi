#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,indice,somma,num1;
	printf("quanti num vuoi sommare");
	scanf("%d",&num);
	somma=0;
	indice=0;
	while(indice<num)
	{
		printf("numero");
		scanf("%d",&num1);
		somma=somma+num1;
		indice=indice+1;
	}
	printf("la somma vale %d",somma);
	return 0;
}
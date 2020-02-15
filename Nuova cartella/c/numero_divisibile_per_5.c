#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	int resto;
	printf("dammi un numero");
	scanf("%d",&numero);
	if (numero%5==0)
	{
		printf ("il numero e divisibile per 5");
		}
		else
		printf("il numero non e divisibile per 5");
		
		
	return 0;
}
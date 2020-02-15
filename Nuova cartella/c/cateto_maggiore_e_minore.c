#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ipotenusa;
	int cateto_maggiore;
	int cateto_minore;
	int perimetro;
	int area;
	printf(" dammi ipotenusa");
	scanf("%d",& ipotenusa);
	printf(" dammi cateto_maggiore");
	scanf("%d",& cateto_maggiore);
	printf(" dammi cateto_minore");
	scanf("%d",& cateto_minore);
	perimetro = ipotenusa+cateto_maggiore + cateto_minore;
	area      = cateto_maggiore* cateto_minore /2;
	printf ("\n\n il perimetro e %d");
	printf("\n\n l area vale %d");
	
	return 0;
}
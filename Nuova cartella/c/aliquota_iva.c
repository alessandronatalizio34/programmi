#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float pre1;
	float pre2;
	float iva1;
	float iva2;
	float imp1;
	float imp2;
	float risiva1;
	float risiva2;
	float somiva;
	float somimp;
	printf("dammi il prezzo");
	scanf("%f",& pre1);
	printf("dammi il secondo prezzo");
	scanf("%f",& pre2);
	printf("dammi l aliquota iva del primo prodotto");
	scanf ("%f",& iva1);
	printf("dammi l aliquota iva del secondo prodotto");
	scanf ("%f",& iva2);
	risiva1 = pre1*iva1/100;
	risiva2 = pre2*iva2/100;
	imp1    = pre1*1,10;
	imp2    = pre2*1;22;
	somiva  = risiva1+risiva2;
	somimp  = imp1+imp2;
	scanf("la somma della iva e %f",somiva);  
	scanf("la somma degli imponibile e %f",somimp);
	
	return 0;
}
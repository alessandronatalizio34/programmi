#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int risultato;
	printf("\n dammi il primo valore della somma");
	scanf("%d",&a);
	printf("\n dammi il secondo valore della somma");
	scanf("%d",&b);
	risultato = a+b;
	printf ("\n la somma di %d+%d vale %d",a,b,risultato);
	system("pause");
	return 0;
}
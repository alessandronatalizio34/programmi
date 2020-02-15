#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,somma;
	float media;
	printf("\n dammi il primo valore del numero ");
	scanf("%d",&a);
	printf("\n dammi il secondo valore del numero ");
	scanf("%d",&b);
	printf("\n dammi il terzo valore del numero ");
	scanf("%d",&c);
	somma=(a+b+c);
	media=somma/3;
	printf ("\n la media di %d+%d+%d/3 vale %6.2f\n",a,b,c,media);
	system ("pause");
	
	return 0;
}
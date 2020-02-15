#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//SE METTI 3 E 3 TI DICE CHE SONO UGUALI MENTRE SE METTI 3 E 4 QUATTRO E UN NUMERO MAGGIORE//

int main(int argc, char *argv[]) {
	int a;
	int b;
	printf ("inserisci il primo numero");
	scanf  ("%d",&a);
	printf ("inserisci il secondo numero");
	scanf  ("%d",&b);
	if (a>b)
	{
		printf ("il maggiore e %d",a);
		
		}
		else if (a==b)
		printf ("i due numeri sono uguali");
		else
		printf ("il numero maggiore e %d",b);
	return 0;
}
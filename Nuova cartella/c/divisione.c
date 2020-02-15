#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int a,b;
	 float risultato;
	 printf("\n dammi il primo valore della divisione");
	 scanf("%d",&a);
	 printf("\n dammi il secondo valore della divisione");
	 scanf("%d",&b);
	 if(b!=0)
		{
		risultato = (float)a / b;
		printf("\n la divisione di %d / %d vale %f",a,b,risultato);
		}
	else
		printf("\n la divisione di %d / %d non puo' essere effettuata \n",a,b);

    system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a;
	float val;
	printf("dammi un numero");
	scanf("%f",&a);
	val = a * -1;
	if (a>=0)
	{
		printf("il valore assoluto di %6.2f e' %6.2f,",a,a);
	}
	else
	printf("il valore assoluto di %6.2f e' %6.2f,",a,val);
	
	return 0;
}
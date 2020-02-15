#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l;
	int totale_superficie;
	int volume;
	printf("inserire il lato del cubo");
	scanf("%d",&l);
	if (l>0)
	 {
	totale_superficie=l*l*6;
	volume = l*l*l;
	printf("totale_superficie vale %d",totale_superficie);
	printf("totale volume vale %d",volume);
	}
	else
	{
		printf("inserire un valore positivo");
	}
	return 0;
}
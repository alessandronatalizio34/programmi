#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,min,conta,N;
	do{
		printf("di quanti num vuoi elaborare per il calcolo min");
		scanf("%d",&N);
	}while(N<=0);
	printf("dammi un numero");
	scanf("%d",&num);
	min=num;
	conta=1;
	while(conta<N)
	{
		printf("dammi un numero");
			scanf("%d",&num);
			if(num<min)
			{
				min=num;
			}
			conta=conta+1;
	}
	printf("il valore minimo vale : %d",min);
	
	return 0;
}
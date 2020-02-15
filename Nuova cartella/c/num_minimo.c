#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,min,conta;
	printf("dammi un numero");
	scanf("%d",&num);
	min=num;
	conta=1;
	while(conta<10)
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
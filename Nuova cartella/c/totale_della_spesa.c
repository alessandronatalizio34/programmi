#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float spesa;
float importo_scontato; 
printf("dammi il valore della spesa");
scanf("%f",&spesa);
if (spesa>100)
{
importo_scontato= spesa-spesa*20/100;
printf("importo_scontato vale %f",importo_scontato );
}
else
{
	printf("spesa");
	}


	return 0;
}
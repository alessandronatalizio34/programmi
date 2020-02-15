#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int eta;
	int costo_biglietto;
	printf("dammi l eta");
	scanf("%d",&eta);
	if (eta<=10)
	 {
	 	printf(" biglietto gratis");
	 	}
	 	else if (eta<=18)
	 	 { printf("biglietto  costa 5$");}
	 	 else{
	 	 	printf("biglietto costa 10$");
	 	 	}
	
	return 0;
}
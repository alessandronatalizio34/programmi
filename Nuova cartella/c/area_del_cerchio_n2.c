#include <stdio.h>
#include <stdlib.h>
#define  pi 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raggio;
	float area;
	float perimetro;
	printf("valore del raggio");
	scanf("%d",&raggio);
	area=pi*raggio*raggio;
	printf("valore dell area vale 6.2%f",area);
	perimetro=2*pi*raggio;
	printf("vale del perimetro vale 6.2%f",perimetro);
	
	
	
	
	return 0;
}
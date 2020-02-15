#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int raggio;
	int area;
	int circonferenza;
	printf("inserire il raggio");
	scanf("%d",&raggio);
	area=raggio*raggio*3,14;
	circonferenza=2*raggio*3,14;
	printf("l area vale %d",area);
	printf("circonferenza vale %d",circonferenza);
	
	return 0;
}
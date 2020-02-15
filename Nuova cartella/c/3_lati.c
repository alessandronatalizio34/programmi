#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,p,o;
	printf("dammi 3 lati");
	scanf("%d",&a);
	printf("dammi 3 lati");
	scanf("%d",&b);
	printf("dammi 3 lati");
	scanf("%d",&c);
	
	if(a==b&&b==c&&a==c)
	{
		p=a+b+c;
		o=sqrt(a);
		printf("perimetro vale %d",a);
		printf("l area vale %d",b);
	}
	else
	{
	printf("non e un triangolo equilatero");
	}	
	return 0;
}
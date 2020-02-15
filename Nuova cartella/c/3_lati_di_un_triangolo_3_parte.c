#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int a,b,c;
	printf("\n dammi il valore a");
	scanf("%d",&a);
	printf("\n dammi il valore b");
	scanf("%d",&b);
	printf("\n dammi il valore c");
	scanf("%d",&c);
	
	if((a==b)&&(a==c))
	{
	printf("\n il triangolo è equilatero");
	}
	else
		if((a==b)||(b==c)||(a==c))
		{
			printf("\n il triangolo è isoscele");
		}
		else
			printf("\n il triangolo è scaleno");
	
	

	return 0;
}
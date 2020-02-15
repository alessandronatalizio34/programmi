#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int num,doppio,triplo;
printf("\ndammi un numero");
scanf("%d",&num);
if(num>0)
{
printf("\nnumero %d",num);
doppio = num*2;
printf("\n doppio %d",doppio);
int x=7;
printf("\n numero x vale %d",x);
}
triplo=num*3;
printf("\n triplo vale %d",triplo);
	return 0;
}

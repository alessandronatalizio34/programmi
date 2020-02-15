#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// se metti un numero con il meno esce sia la meta e il triplo//

int main(int argc, char *argv[]) {
int num,doppio,triplo;
float meta;
printf("\ndammi un numero");
scanf("%d",&num);
if(num>0)
{
printf("\nnumero %d",num);
doppio = num*2;
printf("\n doppio %d",doppio);
}
else

{
meta=(float)num/2;
printf ("la meta del num vale %f",meta);
}
triplo=num*3;
printf("\n triplo vale %d",triplo);

	return 0;
}
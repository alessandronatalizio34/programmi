#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  spesa,spesa1,spesa2,spesa3,spesa4;
	float pago,sconto,sconto1,sconto2,sconto3,sconto4;
	printf("dammi spesa 1");
	scanf("%d",&spesa1);
	printf("dammi spesa 2");
	scanf("%d",&spesa2);
	printf("dammi spesa 3");
	scanf("%d",&spesa3);
	printf("dammi spesa 4");
	scanf("%d",&spesa4);
	sconto=0;
	pago=0;
	pago=spesa-sconto;
	if(spesa<50)
	{
	printf("spesa %5");
	sconto=spesa*5/100;
	}
	else
	if(spesa<65)
	{
	printf("spesa %6");
		sconto=spesa*6/100;
	}
	if(spesa<80)
	{
	printf("spesa %7");
		sconto=spesa*7/100;
	}
	if(spesa>80)
	{
	printf("spesa %10");
		sconto=spesa*10/100;
	}
	printf("dammi il valore da pagare %d");
	
	return 0;
}
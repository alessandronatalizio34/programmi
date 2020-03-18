#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	genera causalmente N numeri e visualizza il loro quadrato
float nc;
int n,m;
printf("quanti numeri?:");
scanf("%i",&n);
for(m=1;m<=n;m++)
{
	nc=random(1000);
	printf("%5.0f-%5.0f\n",nc,nc*nc);
}
bioskey(0);
return 0;	
}
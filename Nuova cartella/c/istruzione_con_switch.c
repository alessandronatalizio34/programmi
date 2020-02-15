#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int stato;
printf("semaforo");
scanf("%d",&stato);
switch(stato)
{
case1:
printf("stop");
break;
case2:
printf("rallento");
break;
case3:
printf("vado");
break;
default:
printf("attenzione");
}
	return 0;
}
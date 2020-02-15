#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int num,succ,prec;
printf("dammi un numero");
scanf("%d",&num);
succ=++num;
printf("successivo vale %d",succ);
--num;
prec=--num;
printf("il precedente vale %d",prec);
	return 0;
}
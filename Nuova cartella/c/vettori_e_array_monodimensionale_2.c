#include <stdio.h>
#include <stdlib.h>
#define N5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// leggi N e visualizzali a rovescio
int main(int argc, char *argv[]) {
int v[N],i;
system("cls");
printf("\n\n inserisci il %d numeri:\n",N);
for(i=0,i<N,i++)
scanf("%d",&v[i]);
printf("\n\n hai inserito i %d numeri,ora il ciclo si inverte:",N);
for(i=N-1;i>-1;i--)
printf("\n%d",v[i]);
printf("\n\n\n");
system("pause");
return 0;	
}
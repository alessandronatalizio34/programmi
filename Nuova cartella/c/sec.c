#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int s,m,h;
printf("s");
scanf ("%d",&s);
printf("m");
scanf("%d",&m);
printf("h");
scanf("%d",&h);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("il valore di %d",s,m,h);
	
	return 0;
}
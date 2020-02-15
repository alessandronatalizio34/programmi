#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int latoa,latob,latoc,scaleno,iscocele,equilatero,b,a,c;
	printf("latoa");
	scanf("%d",&latoa);
	printf("latob");
	scanf("%d",&latob);
	printf("latoc");
	scanf("%d",&latoc);
	if(a-b<c)
	{
	printf("scaleno");
	}
	else
	if(b+c<a)
	{
	printf("iscoscele");
	}
	else
	printf("equilatero");
	
	return 0;
}
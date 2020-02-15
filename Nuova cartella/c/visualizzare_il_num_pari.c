#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	num=16;
	while((num>=10&&num<=100))
	{
		printf("\n%d",num);
		num=num+8;
	}
	return 0;
}
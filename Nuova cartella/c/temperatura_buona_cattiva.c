#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int temperatura;
    printf("dammi la temperatura");
    scanf("%d",&temperatura);
    if(temperatura<5)
    {
    printf("abbiamo danni irreparabbili");
    }
    else if (temperatura>=18)
    {
    printf ("temperatura buona");
    }
    else
    {
    printf("la condizione e brutta");
    }
	return 0;
}
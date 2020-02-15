#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// precedente e succesivo//
int main(int argc, char *argv[]) {
	int a;
	int prec, succ;
	printf ("immetti il numero:");
	scanf ("%d",&a);
	prec = a - 1 ;
	succ = a + 1 ;
	printf ("\n");
	printf ("il numero inserito e' %d\n'", a);
	printf ("il numero precedente a %d e' %d\n", a, prec);
	printf ("il numero successivo a %d e' %d\n", a, succ);
	
	exit(0);
	
	
	
	return 0;
}
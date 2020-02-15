#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// scrivi un programma che legge un numero num e visualizza tutti i numeri pari inferiori a tale numero//
int main(int argc, char *argv[]) {
	int num, x;
    printf ("Inserisci il numero: "); 
	scanf ("%d", &num);
    x=2;
    while (num>=x) {
  printf ("%d\n", x);
   x=x+2;
    }

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Scrivi un programma che legge 10 numeri e ne stampa il massimo//

int main(int argc, char *argv[]) {
  int i, num1, max;
    max=0;
    i=0;
    while (i<10) {
        i++;
        printf ("Inserisci il numero %d:", i);
		 scanf ("%d", &num1);
        if (num1>max) max=num1;
        }
        printf ("Il numero massimo e' %d", max);

	return 0;
}
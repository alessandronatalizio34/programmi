#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Scrivi un programma che esegue la somma di tutti i numeri multipli di 5 compresi tra 10 e 100//


int main(int argc, char *argv[]) {
   int num, somma;
    somma=0;
    num=10;
   while((num>=10)&&(num<=100))
   {
   	somma=num+somma;
   	num=num+5;   
   }
	 printf ("\nLa somma e' %d", somma);
    
	return 0;
}
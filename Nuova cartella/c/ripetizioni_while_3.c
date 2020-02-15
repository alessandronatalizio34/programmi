#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int numero,somma,conta,indice;
  float media;
  somma=0;
  indice=0;
  media=0.00;
  printf("il numero dei numeri che vuoi sommare");
  scanf("%d", & conta);
  while(indice<conta)
  {
    printf("dammi un numero");
    scanf("%d", & numero);
    indice=somma+numero;
  }
  media=somma/conta;
  printf("media %f", media);
  printf("somma %d", somma);
  
  return 0;
}
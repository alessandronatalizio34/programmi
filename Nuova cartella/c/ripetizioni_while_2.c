#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int numero,somma,conta;
  float media;
 somma=0;
 conta=0;
 media=0;
 printf("dammi un numero");
 scanf("%d",&numero);
 while(numero!=0)
 {
   somma=somma+numero;
   conta=conta+1,
   printf("dammi un numero");
   scanf("%d",&numero);
 }
 media=somma/conta;
 printf("media %f",media);
 printf("somma %d",somma);
  return 0;
}
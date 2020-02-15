#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
  int temperatura_interna, temperatura_esterna, umidità, acceso, spento;
  printf("temperatura interna");
  scanf("%d",& temperatura_interna);
  printf("temperatura esterna");
  scanf("%d",& temperatura_esterna);
  printf("umidità");
  scanf("%d",& umidità);
  
  if(temperatura_interna>70)
  {
    printf("acceso");
  }
  else
  if(temperatura_esterna>100)
  {
    printf("acceso");
  }
  else
  if(umidità>90)
  {
    printf("acceso");
  }
  else
  printf("spento");
  return 0;
}
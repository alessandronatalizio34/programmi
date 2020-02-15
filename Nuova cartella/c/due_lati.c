#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int a,b,p,A;
    printf("dammi due lati");
    scanf("%d",&a);
     printf("dammi due lati");
    scanf("%d",&b);
    if(a==b)
    {
        printf("quadrato");
    }
    else
    {
        printf("rettangolo");
    }
    p=(a+b)*2;
    printf("perimetro vale %d",p);
    A=a*b;
    printf("area vale %d",A);
   
    return 0;
}
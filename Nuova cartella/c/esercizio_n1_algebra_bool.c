#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int a,b,c;
    printf("/ndammi il numero di tre lati");
    scanf("%d", &a);
      printf("/ndammi il numero di tre lati");
    scanf("%d", &b);
      printf("/ndammi il numero di tre lati");
    scanf("%d", &c);
    
    if(a+b<c&&a-b>c||b+c<a&&b-c>a||a+c<b&&a-c>b)
    {
        printf("/nnessun triangolo");
    }
    else
    if(a==b&&a==c&&c==b)
    {
       printf("/nequilatero"); 
    }
    else
    if(a!=b&&a!=c&&a!=b)
    {
        printf("/nscaleno");
       
    }
    else
    printf("/n iscoscele");
    return 0;
}
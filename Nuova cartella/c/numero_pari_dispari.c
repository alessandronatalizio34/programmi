#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int numero;
    int resto;
    printf("dammi un numero");
    scanf("%d",&numero);
    resto=numero%2
    if(resto=0)
    {
    printf("numero e pari");
    }
    else
    printf("numero e dispari");
    }
    return 0;
}
// error:
 
//D:\Users\adv.exe\Desktop\main.c   In function 'main':
//12    5   D:\Users\Adv.exe\Desktop\main.c [Error] expected ';' before 'if'
//C:\Users\Adv.exe\Desktop\main.c   At top level:
//19    2   D:\Users\Adv.exe\Desktop\main.c [Error] expected identifier or '(' before 'return'
// 20   1   D:\Users\adv.exe\Desktop\main.c [Error] expected identifier or '(' before '}' token
// 28       D:\Users\adventuretimeh.exe\Desktop\Makefile.win    recipe for target 'main.o' failed
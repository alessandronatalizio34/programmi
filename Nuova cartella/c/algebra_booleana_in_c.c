#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define PrintBool ("x")  ("x? VERO":"FALSO")
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//SE QUALCUNO MI AIUTA//
int main(int argc, char *argv[]) {
bool a,b,x;
printf("dammi a");
scanf("%s",&a);
printf("dammi b");
scanf("%s",&b);
printf("%s and %s => %s\r\n",PrintBool (a),PrintBool (b),PrintBool (a&&b));
	return 0;
}


4	36	C:\Users\A\Desktop\main.c	[Error] expected ')' before ':' token
13	30	C:\Users\A\Desktop\main.c	[Note] in expansion of macro 'PrintBool'
4	19	C:\Users\A\Desktop\main.c	[Error] called object is not a function or function pointer
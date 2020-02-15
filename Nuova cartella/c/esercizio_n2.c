#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a,b,c,d,media_i,x;
float media_f,media_f2,diff,y,z;
printf("\ndammi un numero");
scanf("%d",&a);
printf("\ndammi un numero");
scanf("%d",&b);
printf("\ndammi un numero");
scanf("%d",&c);
printf("\ndammi un numero");
scanf("%d",&d);
media_i=(a+b+c+d)/4;
printf("\nmedia intera vale %d",media_i);
media_f=(float) (a+b+c+d)/4;
printf("\nmedia float vale %6.1f",media_f);
media_f2=media_f;
printf("\nmedia float 2 vale %f",media_f2);
diff=media_f-media_i;
printf("\ndiff vale %f",diff);
x=diff*10;
x++;
printf("\nx= %d",x);
y=(float) x/10;
printf("\ny=%f",y);
z=media_i+y;
printf("\nla media con un solo decimale vale %f",z);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int h1,h2,m1,m2,diff_o,m_diff;
printf ("h1");
scanf("%d",&h1);
printf ("h2");
scanf("%d",&h2);	
printf ("m1");
scanf("%d",&m1);
printf ("m2");
scanf("%d",&m2);
m1=h1*60+m1;
m2=h2*60+m2;
diff_o=m_diff/60;
m_diff=m_diff%60;
printf("tempo trascorso %d",h1,h2,m1,m2,diff_o,m_diff);
	
	return 0;
}
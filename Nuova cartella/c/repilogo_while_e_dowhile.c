#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// scrivi un programma che legge una sequenza di numeri interi positivi terminati con l immisione di 0 e ne ricava il valore minimo visualizzandola sullo schermo
int main(int argc, char *argv[]) {
	int num,min;
	min=0;
	while(num>0)
	{
		printf("numero");
		scanf("%d",&num);
		if(num>0 && (min==0 || num<min))
		min=num;
	}
	printf("minimo %d",min);
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scrivi un programma che chiede in ingresso un numero finche non si inserisce un numero dispari,quando questo avviene il programma termina scrivendo quanti numeri pari erano stati inseriti;
int num,conta;
conta=0;
printf("numero");
scanf("%d",&num);
while(num%2==0)
{
	conta=conta+1;
	printf("numero");
	scanf("%d",&num);	
}
printf("num pari inseriti sono %d",conta);
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scrivi un programma che prende in ingresso un numero e calcola il doppio della somma dei primi num numeri
int num,somma,conta,totale;
conta=0;
somma=0;
printf("numero");
scanf("%d",&num);
while(conta<num)
{
	conta=conta+1;
	somma=somma+conta;
	totale=somma*2;
}
printf("doppio della somma vale %d",totale);
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scrivi un programma che visualizza i numeri pari multipli di 8 compresi tra 10 e 100
int num,x;
num=16;
while((num>=10&&num<=100))
{
	printf("%d",num)
	num=num+8;
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// multipli di 5 compresi tra 10 e 100
int num,somma;
num=10;
somma=0;
while((num>=10)&&(num<=100))
{
	num=num+5;
	somma=somma+num;
}
printf("somma %d",somma);
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scrivi un programma che legge un numero num e visualizza tutti i numeri pari inferiori a tale numero
int num,x;
x=2;
printf("numero");
scanf("%d",&num);
while(num>=x)
{
	printf("%d",x);
	x=x+2;
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scri un programma che legge 10 num e ne stampi il massimo
int num,max,conta;
conta=0;
max=0;
while(conta<10)
{
	printf("numero");
	scanf("%d",&num);
	conta=conta+1;
	if(num>max)
	{
		max=num;
	}
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scrivi un programma che legge un numero num quindi succisamente esegue la somma di nu m interi inseriti dall utente
int num,somma,conta,indice;
somma=0;
indice=0;
do{printf("quanti num vuoi inserire");
scanf("%d",&conta);
}while(conta<=0);
while(indice<conta)
{
	printf("numero")
	scanf("%d",&num);
	somma=somma+num,
	indice=indice+1;
}
printf("somma %d",somma);
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int somma,conta,num;
float media;
num=33;
conta=0;
somma=0
while(num>=33&&num<=99)
{
	somma=somma+num;
	num=num+3,
	conta=conta+1;
}
media=(float)somma/conta;
printf("somma %d",somma);
printf("media %6.2f",media);
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int num,conta,somma;
float media;
conta=0;
somma=0;
do{printf("num pari terminta quando esce 0");
scanf("%d",&num);
}while(num%2!=0);
while(num!=0)
{
	somma=somma+num;
	conta=conta+1;
do{printf("num pari terminta quando esce 0");
scanf("%d",&num);
}while(num%2!=0);
}
media(float)somma/conta;
printf("somma %d",somma);
printf("media %6.2f",media);
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int num,conta,somma,N;
float media;
conta=0;
somma=0;
do{printf("dimmi quanti num vuoi fare la somma e la media");
scanf("%d",&N);
}while(N<=0);
while(conta<N)
{
	do{printf("num pari terminta quando esce 0");
scanf("%d",&num);
}while(num<=0);
conta=conta+1;
somma=somma+num;
}
media(float)somma/conta;
printf("somma %d",somma);
printf("media %6.2f",media);
*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scri un programma che legge una sequenza di num interi positivi terminati e ne ricava il valore minimo visualizando sullo schermo
int num,min;
min=0;
while(num>10)
{
	printf("numero");
	scanf("%d",&num);
	if(num>0&&(min==0 || num<min))
	{
		min=num;
	}
	printf("minimo %d",min),
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// scri un programma che legge una aequenza di num interi positivi terminato e ne ricavo il valore minimo visualizzando sullo schermo
int num,conta,min,N;
float media;
conta=1;
min=0;
do{printf("num postivo");
scanf("%d",&num);
}while(num<=0);
while(num!=0)
{
	do{printf("num positivo");
scanf("%d",&num);
}while(num<=0);
if(num<min)
{
	min=num;
}
printf("valore min tra num inseriti vale %d",min);
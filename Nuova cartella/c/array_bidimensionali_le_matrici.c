#include <stdio.h>
#include <stdlib.h>

// dichiarazione di una matrice
// Caricamento per riga di una matrice
//visualizzazione di una matrice per riga
// Caricamento per colonna di una matrice
// visualizzazione per colonna di una matrice

int main(int argc, char *argv[]) {
	int dimR,dimC,i,j;
	// definizione numero di righe di una matrice
	do{
		printf("\nquante righe deve avere la matrice ");
		scanf("%d",&dimR);
	}while(dimR<1);
	// definizione numero di colonne di una matrice
	do{
		printf("\nquante colonne deve avere la matrice ");
		scanf("%d",&dimC);
	}while(dimR<1);
	//Dichiarazione della matrice
	int matrice[dimR][dimC];
	//Caricamento matrice per riga
	for(i=0;i<dimR;i++)
		for(j=0;j<dimC;j++)
		{	printf("\n dammi il valore della matrice a riga %d e colonna %d ",i,j);
			scanf("%d",&matrice[i][j]);	}
	//visualizzazione matrice 
	for(i=0;i<dimR;i++)
	{	printf("\n");
		for(j=0;j<dimC;j++)
		{printf("\t %d ", matrice[i][j]);}
	}
		//Caricamento matrice per colonna
	for(j=0;j<dimC;j++)
		for(i=0;i<dimR;i++)
		{	printf("\n dammi il valore della matrice a riga %d e colonna %d ",i,j);
			scanf("%d",&matrice[i][j]);	}
	//visualizzazione matrice 
	for(i=0;i<dimR;i++)
	{	printf("\n");
		for(j=0;j<dimC;j++)
		{printf("\t %d ", matrice[i][j]);}
	}
	return 0;
}
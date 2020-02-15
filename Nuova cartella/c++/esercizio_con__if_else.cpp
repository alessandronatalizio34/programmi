#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char categoria;
	float costo;
	
	cout << "Inserisci la categoria:\ncategoria P = pensionati, S = studenti, D = disoccupati):\t ";
	cin >> categoria ;
	cout << "prezzo biglietto:\t ";
	cin >> costo;
	
	if (categoria == 'P')
		costo -= costo * 0.1;
	else if (categoria == 'S')
		costo -= costo * 0.15;
	else if (categoria == 'D')
		costo -= costo * 0.25;
	else
		cout << "la categoria inserita non ha sconti\n" << endl;
	
	cout << "Pagherai : \n" << costo << endl;
	system ("pause");
	return 0;
}
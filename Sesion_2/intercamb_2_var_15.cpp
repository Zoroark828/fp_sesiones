/*
Ejercicio 15. El usuario introduce dos valores y el programa intercambia sus valores.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int caja_izda, caja_dcha, copia_izda;
	
	cout << "Introduzca el valor de la caja izquierda: ";
	cin >> caja_izda;
	
	cout << "Introduzca el valor de la caja derecha: ";
	cin >> caja_dcha;
	
	copia_izda = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = copia_izda;
	
	cout << "\nAhora la caja izquierda vale " << caja_izda << " y la caja derecha vale " << caja_dcha << ".";	
	
	return 0;
}













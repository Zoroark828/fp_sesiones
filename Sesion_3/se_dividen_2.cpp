/*
Ejercicio 2, relacion de problemas 2. Dados dos valores enteros, el programa dirá si cualquiera de ellos divide o no al otro.
No es necesario decir quien divide a quien. Supondremos que ambos valores son distintos que 0.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int valor1, valor2;
	bool se_dividen;
	
	cout << "Introduzca el valor 1: ";
	cin >> valor1;
	cout << "Introduzca el valor 2: ";
	cin >> valor2;
	
	se_dividen = valor1 % valor2 == 0 || valor2 % valor1 == 0;
	
	if (se_dividen)
		cout << "\n\nAl menos uno de ellos divide al otro.";
	else
		cout << "\n\nNinguno de ellos divide al otro.";
	
	
	return 0;
}








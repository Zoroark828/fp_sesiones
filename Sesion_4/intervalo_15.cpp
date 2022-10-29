/*
Ejercicio 15, relacion de problemas 2. El usuario introduce un intervalo y un valor. El programa estudia si dicho valor
esta contenido en el intervalo.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double cota_izda, cota_dcha;
	char car_izda, car_dcha, car_coma;
	double valor;
   	string string_solucion;
   	
	cout << "Intervalo.\n\n" << "Introduzca el intervalo.\n";
    
	cin >> car_izda; 
	cin >> cota_izda;
	cin >> car_coma; 
	cin >> cota_dcha;
	cin >> car_dcha; 

	
	cout << "\nIntroduzca el numero que desea comprobar si esta dentro del intervalo anterior: ";
	cin >> valor;
	
	
	// Si el valor está entre las cotas, o es igual a una de las dos cotas y el caracter de esa cota es cerrado (un corchete []),
	// esta dentro del intervalo.
	if (valor > cota_izda && valor < cota_dcha)
		string_solucion = " esta dentro del intervalo ";
	else if (valor == cota_izda && car_izda == '[')
		string_solucion = " esta dentro del intervalo ";
	else if (valor == cota_dcha && car_dcha == ']')
		string_solucion = " esta dentro del intervalo ";
	else
		string_solucion = " no esta dentro del intervalo ";
	
	
	cout << "\n\nEl valor " << valor << string_solucion
		<< car_izda << " " << cota_izda << " " << car_coma << " " << cota_dcha << " " << car_dcha;
	
	
	
	
	return 0;
}













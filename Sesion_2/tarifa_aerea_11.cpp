/*
Ejercicio 11. La tarifa base son 150€ y por cada kilometro se suman 0'1 centimos.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double tarifa_base = 150, num_kilometros, precio_final;
	const double FACTORKM = 0.1;
	
	cout << "Introduzca el numero de kilometros de su viaje: ";
	cin >> num_kilometros;
	
	precio_final = tarifa_base + num_kilometros * FACTORKM;
	
	cout << "\nEl precio final de su viaje es de " << precio_final <<" euros.";
	
	
	return 0;
}













/*
Ejercicio 12. Lo unico que nos piden es que al valor del precio del billete le apliquemos un descuento del 2%
y otro del 4% (por separado).

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double precio_billete, precio_dos_porc, precio_cuatro_porc;
	const double FACTORDOSPORCIENTO = 0.02, FACTORCUATROPORCIENTO = 0.04;
	
	cout << "Introduzca el precio de su billete: ";
	cin >> precio_billete;
	
	precio_dos_porc = precio_billete - (precio_billete * FACTORDOSPORCIENTO);
		
	precio_cuatro_porc = precio_billete - (precio_billete * FACTORCUATROPORCIENTO);

	cout << "\nPrecio final si aplicamos el descuento del 4%: " << precio_cuatro_porc;	
	cout << "\nPrecio final si aplicamos el descuento del 2%: " << precio_dos_porc;
	
	return 0;
}













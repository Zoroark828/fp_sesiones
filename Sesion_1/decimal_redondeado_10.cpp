/*
Ejercicio 10 (Opcional). Dado un numero, lo redondeamos a la cifra decimal que introduzca el usuario

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float numero, redondeo;
	int posicion;
	const int DIEZ = 10;
	
	cout << "Introduce el numero a redondear y la posicion de la cifra decimal: ";
	cin >> numero >> posicion;
	
	// Primero multiplicaremos el numero por potencias de 10 elevadas a la posicion deseada
	redondeo = numero * pow(DIEZ,posicion);
	
	// Hacemos el redondeo con la funcion round
	redondeo = round(redondeo);
	
	// Desacemos la multiplicacion por una potencia de 10 que hicimos antes
	redondeo = redondeo / pow(DIEZ,posicion);
	
	cout << "\n" << numero << " redondeado es " << redondeo;
		
   	return 0;
}













/*
Ejercicio 9. Dado un numero de grados dado por el usuario, el programa calculará su conversión a radianes
Como de momento no hemos dado ni los bucles ni los vectores, he hecho el codigo mas repetitivo

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float PI, grados1, grados2, radianes1, radianes2;
   	const float CEROCONCINCO = 0.5;
	const int CIENTOOCHENTA = 180, SEIS = 6;
   
	cout << "Introduzca dos grados: ";
	cin >> grados1 >> grados2;
   
   	// Calculamos el valor de PI despejado de la ecuación (PI / 6) = arcoseno(0.5)
   
	PI = asin(CEROCONCINCO) * SEIS;
   
   	// Utilizamos la formula radianes = grados * (PI / 180) para hacer la conversión
	radianes1 = grados1 * (PI / CIENTOOCHENTA);
	radianes2 = grados2 * (PI / CIENTOOCHENTA);

  	cout << grados1 << " grados son " << radianes1 <<" radianes.\n";
    cout << grados2 << " grados son " << radianes2 <<" radianes.";

  	return 0;
}













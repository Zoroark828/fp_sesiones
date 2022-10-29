/*
Ejercicio 4, relacion de problemas 2. Mejoramos este ejercicio de la tarifa base que ya comenzamos en las practicas anteriores.
Si la distancia que recorre el cliente es mayor que 300, pagará la tarifa + 10 cts por kilometro a partir del 301.
En otro caso, pagara solo la tarifa base.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double recargo_km = 0.1;
	double trf_base = 150.0;
	double trf;
	double dist, dist_de_mas;
	double const DIST_LIMITE = 300;
	bool gran_distancia;
	
	cout << "Tarifa aérea.";
	cout << "\nIntroduzca la distancia del recorrido del viaje: ";
	cin >> dist;
	
	gran_distancia = dist > 300;
	
	if (gran_distancia){
		dist_de_mas = dist - DIST_LIMITE;
		trf = trf_base + recargo_km * dist_de_mas;
	}
	else
		trf = trf_base;
	
	cout << "\n\nTarifa final: ";
	cout << trf;
	
	
	
	return 0;
}













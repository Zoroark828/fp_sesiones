/*
Ejercicio 7, relacion de problemas 2.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double recargo_km = 0.1;
	double trf_base = 150.0;
	double const DESC_PUNTOS1 = 0.03, DESC_PUNTOS2 = 0.04, DESC_KM = 0.02;
	int puntos;
	double desc_aplicable;
	double trf, trf_desc;
	double dist, dist_de_mas;
	double const DIST_LIMITE = 300;
	bool km_mayor_300, km_mayor_700, puntos_mayor_100, puntos_mayor_200;
	
	cout << "Tarifa aerea.";
	cout << "\nIntroduzca la distancia del recorrido del viaje: ";
	cin >> dist;
	cout << "\nIntroduzca sus puntos de cliente: ";
	cin >> puntos;
	
	// Evaluamos todas las posibles condiciones
	km_mayor_300 = dist > 300;
	km_mayor_700 = dist > 700;
	puntos_mayor_100 = puntos > 100;
	puntos_mayor_200 = puntos > 200;
		
	
	// Calculamos el precio sin aplicar los descuentos
	if (km_mayor_300){
		dist_de_mas = dist - DIST_LIMITE;
		trf = trf_base + recargo_km * dist_de_mas;
	}
	else
		trf = trf_base;
	
	
	// Calculamos el descuento a aplicar
	desc_aplicable = 0;
	
	if (km_mayor_700)
		desc_aplicable += DESC_KM;
	
	if (puntos_mayor_100 && !puntos_mayor_200)
		desc_aplicable += DESC_PUNTOS1;
	else if (puntos_mayor_200)
		desc_aplicable += DESC_PUNTOS2;
	
	
	// Aplicamos el descuento a la tarifa calculada antes	
	trf_desc = trf - (trf * desc_aplicable);
	
	
	cout << "\n\nLa tarifa sin descuento es: ";
	cout << trf;	
	
	cout << "\n\nLa tarifa con descuento aplicado es: ";
	cout << trf_desc;
	
	
	
	
	return 0;
}













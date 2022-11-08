/*
Ejercicio 41, relacion de problemas 2. Mejoramos de nuevo el ejercicio de la tarifa aerea. Esta vez, añadimos
que el usuario puede introducir distintos billetes. Para hacerlo, se le pedirá un caracter. Si introduce una N,
podra introducir los datos de un nuevo billete. Si introduce un #, el programa acabará.

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
	const int MIN_KM = 0, MIN_PUNTOS = 0, MAX_PUNTOS = 400;
	
	// Para este ejercicio las dos variables nuevas que necesitamos son estas:
	char caracter;
	bool es_fin_entrada;
	
	cout << "Tarifa aerea para una serie de billetes.\n";
	cout << "Para aniadir un nuevo billete, pulse N. Para salir, introduzca #.\n";
	
	do{	// Este do..while controla todo el programa. Si introducimos un #, acaba el programa. Si no, se reinicia para tomar más valores.
		do{
			cin >> caracter;		
		}while(caracter != '#' && caracter != 'N');
		
		es_fin_entrada = caracter == '#';
		
		if(!es_fin_entrada){	// Si el caracter no es #, pedimos los datos y hacemos los calculos...
			cout << "Introduzca la distancia recorrida en el viaje: ";
			do{
				cin >> dist;
			}while (dist <= MIN_KM);
		
			cout << "Introduzca sus puntos de cliente: ";
			do{	
		
				cin >> puntos;
			}while (puntos < MIN_PUNTOS || puntos > MAX_PUNTOS);		
			
			
			// CALCULOS DEL PROGRAMA
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
			
			
			cout << "\nLa tarifa sin descuento es: ";
			cout << trf;	
			
			cout << "\nLa tarifa con descuento aplicado es: ";
			cout << trf_desc << "\n\n";
		
		
		
		}	// Aqui acaba el if que permite hacer las operaciones :)
	
	}while(!es_fin_entrada);	// Aqui acaba el programa si se introdujo un # :)
	
	
	
	return 0;
}













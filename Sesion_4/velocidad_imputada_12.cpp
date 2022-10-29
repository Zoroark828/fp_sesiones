/*
Ejercicio 12, relacion de problemas 2. Segun el tipo de radar, se calcula una velocidad imputada distinta a la velocidad
captada dada por el usuario.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	char tipo_radar;
	double velocidad_captada, velocidad_imputada;
	double margen_error;
	bool es_radar_fijo, velocidad_menor_100;
	const double FACTOR_FIJO1 = 5, FACTOR_FIJO2 = 0.05, FACTOR_MOVIL1 = 7, FACTOR_MOVIL2 = 0.07;
	
	cout << "Introduzca F mayuscula si el radar es de tipo fijo y otro caracter si es movil: ";
	cin >> tipo_radar;
	cout << "Introduzca la velocidad captada: ";
	cin >> velocidad_captada;
	
	es_radar_fijo = tipo_radar == 'F';
	velocidad_menor_100 = velocidad_captada <= 100;
	
	/* Cómo funcionan los radares según su tipo:
	a) En el caso de un radar fijo:
		I) Si la velocidad captada por el radar es menor o igual que 100 km/h, el margen
	de error es de ± 5km/h.
		II) En caso contrario, el margen de error es de un 5%
	
	b) En el caso de un radar móvil:
		I) Si la velocidad captada por el radar es menor o igual que 100 km/h, el margen
	de error es de 7km/h.
		II) En caso contrario, el margen de error es de un 7%
	*/
	
	if (es_radar_fijo){
		if (velocidad_menor_100)
			margen_error = FACTOR_FIJO1;
		else
			margen_error = velocidad_captada * FACTOR_FIJO2;
	}
	else {
		if (velocidad_menor_100)
			margen_error = FACTOR_MOVIL1;
		else
			margen_error = velocidad_captada * FACTOR_MOVIL2;
	}
	
	velocidad_imputada = velocidad_captada - margen_error;	
	
	cout << "La velocidad imputada es: " << velocidad_imputada;
	
	return 0;
}













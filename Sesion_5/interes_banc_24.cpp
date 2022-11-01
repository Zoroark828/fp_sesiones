/*
Ejercicio 24, relacion de problemas 2. Queremos calcular el capital obtenido en el transcurso de cada año con un
interés elegido por el usuario. Todo el dinero es reinvertido cada año, no solo el obtenido por el interés

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double interes;
	double capital;
	double capital_final;
	int anios;

	cout << "Introduzca capital inicial --> ";
	cin >> capital;
	cout << "Introduzca interes --> ";
	cin >> interes;
	cout << "Introduzca el numero de anios --> ";
	cin >> anios;
	
	capital_final = capital;					// Tenemos que hacer esta asignación porque si no capital_final no tendrá
												// valor al inicio del bucle for
	
	for (int i = 0; i < anios; i++){
		capital_final = capital_final + capital_final * interes/100.0;
		
		cout << "\nCapital obtenido en el transcurso del anio numero " << i << " = " << capital_final;		
	}
	
	return 0;
}




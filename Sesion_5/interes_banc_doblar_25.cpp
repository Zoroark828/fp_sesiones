/*
Ejercicio 25, relacion de problemas 2. Construiremos un programa que calculará el numero de años
que deben pasar para que el capital que tengamos doble el capital inicial

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double interes;
	double capital_inicial;
	double capital_final;
	int anios;
	
	cout << "Introduzca capital inicial --> ";
	cin >> capital_inicial;
	cout << "Introduzca interes --> ";
	cin >> interes;

	capital_final = capital_inicial;
	anios = 0;
	
	while (capital_final < 2 * capital_inicial){
		capital_final = capital_final + capital_final * interes/100.0;
		
		anios++;		// Contador del numeros que años que pasan por cada iteración
	}
	
	cout << "Para doblar la cantidad inicial han de pasar " << anios <<" anios";
	cout << "\nAl finalizar, se obtendra un total de " <<capital_final <<" euros";
	
	return 0;
}













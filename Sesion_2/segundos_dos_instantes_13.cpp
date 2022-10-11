/*
Ejercicio 13. El usuario introduce las horas, minutos y segundos de dos intervalos.
Hacemos su conversion a segundos y restamos al primero el segundo. Imprimimos esta diferencia por pantalla.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int horas1, min1, seg1, horas2, min2, seg2;
	int segundos_tot1, segundos_tot2, diferencia_segundos;
	const int FACTORMINUTOS = 60, FACTORSEGUNDOS = 60;
	
	cout << "Introduce las horas, minutos y segundos del intervalo 1: ";
	cin >> horas1 >> min1 >> seg1;
		
	cout << "Ahora las del intervalo 2: ";
	cin >> horas2 >> min2 >> seg2; 
	
	segundos_tot1 = (horas1 * FACTORMINUTOS + min1) * FACTORSEGUNDOS + seg1;
	
	segundos_tot2 = (horas2 * FACTORMINUTOS + min2) * FACTORSEGUNDOS + seg2;

	diferencia_segundos = segundos_tot2 - segundos_tot1;
	
	cout << "\nLa diferencia entre ambos intervalos es de " << diferencia_segundos << " segundos.";
			
	return 0;
}













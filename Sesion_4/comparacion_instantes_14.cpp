/*
Ejercicio 14, relacion de problemas 2. Dados dos instantes introducidos por el ususario, los comparamos para saber si 
el primer instante es anterior al segundo. Esta comparación NO la haremos convirtiendo los valores a segundos, sino
comparando horas con horas, minutos con minutos y segundos con segundos usando expresiones logicas

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int horas1, min1, seg1, horas2, min2, seg2;
	bool horas1_menor, min1_menor, seg1_menor, horas_iguales, min_iguales, seg_iguales;
	
	cout << "Introduce las horas, minutos y segundos del intervalo 1: ";
	cin >> horas1 >> min1 >> seg1;
		
	cout << "Ahora las del intervalo 2: ";
	cin >> horas2 >> min2 >> seg2; 
	
	// Evaluamos las variables bool
	horas1_menor = horas1 < horas2;
	horas_iguales = horas1 == horas2;
	min1_menor = min1 < min2;
	min_iguales = min1 == min2;
	seg1_menor = seg1 < seg2;
	seg_iguales = seg1 == seg2;
	
	/*
	Razonamiento del siguiente bucle:
	Si las horas del primero son menores, el primero es anterior.
	Si no, caben dos opciones:
		1) Las horas del primero son mayores, el primero NO es anterior.
		2) Ambas horas son iguales, luego, comprobamos los minutos del primero son menores. En ese caso, el primero es anterior.
		Si no lo es, caben dos opciones:
			1) Los minutos del primero son mayores, el primero NO es anterior.
			2) Ambos minutos son iguales. Comprobamos si los segundos del primero son menores a los del segundo, y en ese caso el primero es anterior.
			Si no lo son, es porque los segundos son iguales (es decir, son el mismo intervalo) o los del segundo son mayores. En ambos casos,
			el primer intevalo NO es anterior.
	*/
	
	
	if (horas1_menor)
		cout << "El primero es anterior";
	else{
		if (horas_iguales){
			if (min1_menor)
				cout << "El primero es anterior";
			else{
				if (min_iguales){
					if (seg1_menor)
						cout << "El primero es anterior";
					else
						cout << "El primero no es anterior";
				}
				else
					cout << "El primero no es anterior";
			}		
		}
		else
			cout << "El primero no es anterior";
	}
	
	
	return 0;
}













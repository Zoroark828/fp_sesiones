/*
Ejercicio 32, relacion de problemas 2. Este programa calcula una aproximacion de pi usando la serie
usada por Madhava of Sangamagrama para calcular el arcotangente. EL enunciado del ejercicio especifica que
NO podemos usar la funcion pow ni ningun condicional if en las operaciones.

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const int TOPE_MAXIMO = 1e+5;
	int tope;
	double potencia1, potencia2;
	double pi_aproximado, suma, denominador;
	const double FACTOR1 = -1.0, FACTOR2 = 1.0/sqrt(3);
	
	cout.precision(15);
	
	cout << "Introduzca el indice de la ultima iteracion (<" << TOPE_MAXIMO << ")\n";
	do{
		cin >> tope;
	}while (tope <= 0 || tope > TOPE_MAXIMO);
	
	
	suma = 0;
	potencia1 = -1;
	potencia2 = -1;
	
	for (int i = 0; i < tope; i++){
		denominador = (2*i + 1)/1.0;
		
		/*
		potencia1 = 1;								// Bucle para calcular la potencia (-1)^i
		for (int j = 0; j < i; j++){				// No es necesario usarlo porque si nos damos cuenta,
			potencia1 = potencia1 * FACTOR1;		// en cada iteracion potencia1 lo unico que hace es cambiar de signo
		}
		*/
		potencia1*=-1.0;							// Mejor solo cambiamos su signo, asi evitamos hacer otro bucle :)
		
		potencia2 = 1;								// Bucle para calcular la potencia (1/sqrt(3))^(2i+1)
		for (int k = 0; k < denominador; k++){
			potencia2 = potencia2 * FACTOR2;
		}
		
		suma = suma + potencia1 * potencia2 / denominador;
	}
	
	pi_aproximado = 6 * suma;
	
	cout << "\nEl valor de pi aproximado por Madhava es: " << pi_aproximado;
	
	
		
	
	return 0;
}






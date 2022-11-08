/*
Ejercicio 31, relacion de problemas 2. Aproximacion de pi por John Wallis. La implementamos de dos maneras distintas.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	const int TOPE_MAXIMO = 1e+5;
	int tope, numerador, copia_num;
	double suma, pi_aproximado, denominador;
	bool numerador_cambia;
	
	cout.precision(15);
	
	cout << "Introduzca el indice de la ultima iteracion (<" << TOPE_MAXIMO << ")\n";
	do{
		cin >> tope;
	}while (tope <= 0 || tope > TOPE_MAXIMO);
	
	numerador = 2;			// Inicializamos num y denom a sus valores iniciales
	denominador = 1.0;
	numerador_cambia = false;
	suma = 1;
	
	// PRIMERA FORMA DE HACERLO:
	// Cuando el numerador cambia, el denominador no cambia. Cuando el numerador no cambia, el denominador sí.
	// Cuando uno de los dos cambia, lo hace de dos en dos.
	/*
	for (int i = 1; i <= tope; i++){			
		suma = suma * numerador/denominador;
		
		if (numerador_cambia){
			numerador += 2;
			numerador_cambia = false;
		}
		else{
			denominador+=2;
			numerador_cambia = true;
		}
	}
	*/
	
	
	
	// SEGUNDA FORMA DE HACERLO:
	// Si nos fijamos, el numerador es el denominador de la iteracion anterior + 1.
	// Además, el denominador tambien es el numerador de la iteracion anterior +1.
	// Por ende, debemos hacer una copia del numerador para luego poder asignarselo al denominador.
	// Tambien hay que tener en cuenta si i=1 (primera iteracion), como en la primera forma de resolver el ejercicio.
	
	for (int i = 1; i <= tope; i++){			
		suma = suma * numerador/denominador;
		
		copia_num = numerador;
		numerador = denominador + 1;
		denominador = copia_num + 1;
	}
		
	pi_aproximado = 2 * suma;
	
	cout << "\nEl valor de pi aproximado por Wallis es " << pi_aproximado;
	
	
	
	
	return 0;
}





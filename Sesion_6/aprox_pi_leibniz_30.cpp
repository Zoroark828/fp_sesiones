/*
Ejercicio 30, relacion de problemas 2. Este ejercicio tiene 3 apartados.

Autora: @Zoroark828
*/

#include <iostream>

using namespace std;

int main(){
	const int TOPE_MAXIMO = 1e+5;
	int tope, potencia;
	double suma, sumando;
	double pi_aproximado;
	const int MENOSUNO = -1;
	
	cout.precision(15);
	
	cout << "Introduzca el indice de la ultima iteracion (<" << TOPE_MAXIMO << ")\n";
	do{
		cin >> tope;
	}while (tope <= 0 || tope > TOPE_MAXIMO);
	
	suma = 0;
	sumando = 0;
	
	/* a) Use la funcion pow (potencia) de cmath para calcular (-1)^i
	
	for (int i = 0; i < tope; i++){
		sumando = pow(-1,i) / (2*i + 1.0);
		suma = suma + sumando;
	}
	*/
	
	/* b) Calcule (-1)^i sin usar la funcion pow
	
	for (int i = 0; i < tope; i++){
		
		potencia = 1;
		for (int j = 0; j < i; j++){
			potencia = potencia * MENOSUNO;
		}
		
		sumando = potencia / (2*i + 1.0);
		suma = suma + sumando;
	}
	*/
	
	// c) Haga lo mismo de una forma más eficiente. Por ejemplo, observando que la potencia vale 1 cuando i es par y -1 cuando es impar
	
	for (int i = 0; i < tope; i++){
		
		potencia = -1;
		
		if (i % 2 == 0)
			potencia = 1;
		
		sumando = potencia / (2*i + 1.0);
		suma = suma + sumando;
	}
	
	// Al hacerlo de esta forma, comprobamos que es mucho mas eficiente que usar un bucle para calcular la potencia.
	// El programa tarda mucho menos en calcular el resultado que en el apartado b)
	
	pi_aproximado = 4 * suma;
	
	cout << "Valor aproximado obtenido por la serie de Leibniz (apartado b): " << pi_aproximado;
	
	
	
	
	return 0;
}



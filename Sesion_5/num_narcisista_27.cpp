/*
Ejercicio 27, relacion de problemas 2. Programa que imprime si un numero introducido es narcisista o no.

¿Qué es un numero narcisista? Un numero entero es narcisista si se puede obtener como la suma de las potencias
n-esimas de cada uno de sus digitos.

Ejemplos de numeros narcisistas:
153 = 1^3+5^3+3^3						(Elevamos a 3 porque 153 tiene 3 digitos)
8208 = 8^4 + 2^4 + 0^4 + 8^4			(Elevamos a 4 porque tiene 4 digitos)

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int numero, calculo_digitos, num_digitos, digito_actual, numero_seccionado, suma_final;
	
	bool es_narcisista;
	
	cout << "Introduzca un numero entero positivo: ";
	cin >> numero;
	
	num_digitos = 0;
	calculo_digitos = numero;
	
	while (calculo_digitos >= 1){									// Calculamos el numero de digitos del numero
		calculo_digitos /= 10;
		num_digitos++;
	}

	numero_seccionado = numero;										// Iniciamos algunas variables
	suma_final = 0;
	
	for (int i = 1; i <= num_digitos; i++){		
		digito_actual = numero_seccionado % 10;						// Elegimos la ultima cifra del numero actual
		numero_seccionado = numero_seccionado / 10;					// Eliminamos esta ultima cifra para la siguiente iteracion

		suma_final += pow(digito_actual,num_digitos);				// Sumamos el digito elevado al numero de digitos del numero
	}
	
	es_narcisista = suma_final == numero;							// Evaluamos si es narcisista o no

	if (es_narcisista)
		cout << "\nEl numero " <<numero <<" es narcisista.";
	else
		cout << "\nEl numero " <<numero <<" no es narcisista.";




	return 0;
}













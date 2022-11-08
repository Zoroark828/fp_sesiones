/*
Ejercicio 1, relacion de problemas 3. A partir de la solucion del ejercicio 19 de la relacion 2, otorgada
por los profesores, modificamos el programa para separar los computos de las E/S. Cuando encontremos un divisor
debemos guardarlo en un vector llamado divisores. Una vez encontrados todos los divisores, se imprimirán sus
usando un bucle distinto.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int entero, ultimo_divisor, divisor, indice;
	
	cout << "Divisores propios de un entero\n\n";
	cout << "Introduce un numero entero mayor estricto que 0: ";
	do{
		cin >> entero;
	}while (entero <= 0);
	
	divisor = 2;	// Divisor será 2 porque no queremos que compruebe si el 1 es divisor
	ultimo_divisor = entero / 2;	// Dividimos entre 2 porque un numero jamas será divisible por un numero mayor que entero / 2
	
	int divisores[ultimo_divisor];	// Inicializamos aqui el array para asegurarnos de que, por muy grande que sea el numero,
									// el vector podrá contener todos sus posibles divisores
	
	indice = 0;		// Indice del vector divisores. Nos ayudará a saber cuantos divisores encontramos
	
	while (divisor <= ultimo_divisor){
		if (entero % divisor == 0){
			divisores[indice] = divisor;
			indice++;
		}
		divisor++;
	}
	
	cout << "\nDivisores propios de " << entero << ": ";
	
	for (int i = 0; i < indice; i++){
		cout << divisores[i] << " ";
	}
	
	
	
	return 0;
}

/* CÓDIGO ORIGINAL (sin vectores)

int main(){
	int entero, ultimo_divisor, divisor;
	
	cout << "Divisores propios de un entero\n\n";
	cout << "Introduce un numero entero mayor estricto que 0: ";
	do{
		cin >> entero;
	}while (entero <= 0);
	
	divisor = 2;	// Divisor será 2 porque todos los numeros tienen al menos 2 divisores: el 1 y sí mismos
	ultimo_divisor = entero / 2;	// Como buscamos sus divisores propios, no queremos contar esos 2 divisores que ya hemos contado
	
	cout << "\nDivisores propios de " << entero << ": ";
	
	while (divisor <= ultimo_divisor){
		if (entero % divisor == 0)
			cout << divisor << " ";
		
		divisor++;
	}

	
	
	return 0;
}
*/











/*
Ejercicio 40, relacion de problemas 2. Consideraremos que un numero muy divisible es aquel tal que, dado un entero k, dicho
numero tiene k o más divisores propios (no cuentan ni el propio numero ni el 1). Este programa toma un intervalo [min,max]
y el valor de k, e imprime por pantalla los numeros de dicho intervalo que son muy divisibles.

Este fue un ejercicio del examen de prácticas de Noviembre de 2019.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int min, max, k, numero, num_divisores;
	bool tiene_k_divisores;
	
	cout << "Introduzca el minimo: ";
	cin >> min;
	cout << "Introduzca el maximo: ";
	do{
		cin >> max;
	}while(max < min);
	cout << "Introduzca el entero k: ";
	do{
		cin >> k;
	}while(k < 1);
	
	cout << "\n\nLos numeros muy divisibles de este intervalo son... ";
	
	for (int i = min; i <= max; i++){
		num_divisores = 0;				// Hay que "reiniciar" estas variables cada vez que empecemos con un
		tiene_k_divisores = false;		// nuevo numero del intervalo
		
		for (int divisor = i-1; divisor > 1 && !tiene_k_divisores; divisor--){
			numero = i;					// numero es una variable copia del numero i
			
			while (numero != 0){			
				if (numero%divisor == 0){	// Comprobamos si lo divide
					numero/=divisor;
					num_divisores++;
				}
				else
					numero = 0;				// Si no divide, para evitar un bucle infinito, hacemos que numero sea 0
			}
			
			tiene_k_divisores = num_divisores >= k;		// Comprobamos si ya tenemos k divisores en el numero actual, para asi
														// salir del bucle si ya los encontramos :)!!
		}
		
		if (tiene_k_divisores)
			cout << i << "  ";
			
	}
	
	// *La inicializacion de divisor dentro del bucle for anidado es así porque hay que tener en cuenta que no queremos
	// que el programa cuente como divisores al numero con el que trabajamos (la "i"), ni al numero 1 !!!!
	
	
	
	return 0;
}




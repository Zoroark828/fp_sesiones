/*
Ejercicio 26, relacion de problemas 1. Le damos el valor de un char numerico a una variable entera, que debe almacenar el valor que representa
el char y no su representacion interna.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	/*
	int entero;
	char caracter;
	
	cin >> caracter;
	entero = caracter;
	
	Supongamos que a caracter le damos el valor '7'. Internamente, como se ve en la tabla ASCII, la variable guarda un 55,
	que es el número que representa al 7.
	Luego, al darle a un entero el valor del caracter, no le damos el 7 que esperariamos, sino el 55 que guarda internamente.
	
	Si queremos que el entero, haciendole una asignación del caracter, guarde el valor 7 y no su representacion interna, tenemos que
	restarle (55 - 7) = 48 a 55 para que nos de 7. Esto no lo haremos utilizando un numero magico, sino usando una variable constante
	que tenga el valor de, por ejemplo, '0' - 0, o tambien podriamos usar el valor de '8' -8, '7' - 7, etc
	
	Para que, si el usuario introduce un caracter que no es un numero en la tabla ASCII no haga una conversión sin sentido, utilizaremos
	un bucle do while que obligue al usuario a introducir un caracter correcto antes de proceder con el calculo.
	*/
	
	int entero;
	char caracter;
	const int DIFERENCIA_NUMCHAR_NUMINT = '4' - 4;
	
	do{
		cout << "Introduzca el caracter numerico que convertira en un entero: ";
		cin >> caracter;
	} while (caracter < '0' || caracter > '9');
	
	entero = caracter - DIFERENCIA_NUMCHAR_NUMINT;
	
	cout << "\nEl caracter que introdujo es: " << caracter;
	cout << "\nEste caracter como una variable entera es: " << entero;
	
	return 0;
}













/*
Ejercicio 22, relacion de problemas 2. Modificamos el ejercicio de la variacion porcentual de la Sesion 1 para que
ahora el usuario pueda introducir multiples valores.

La entrada de datos se interrumpirá cuando se introduzca cualquier valor negativo. Para hacerlo más simple, supondremos que si
el primer valor introducido es positivo, el segundo también lo será.

Podemos mezclar entradas de datos con salidas y cómputos, dentro del mismo bucle.

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double valor_ini, valor_fin, VP;
	const int CIEN = 100;
   	
	cout << "Introduzca el valor inicial (negativo si no desea introducir mas valores): ";
	cin >> valor_ini;
   	
	while (valor_ini >= 0){
		cout << "Introduzca el valor final (positivo, por favor): ";
		cin >> valor_fin;
		
		VP = abs(CIEN * (valor_fin - valor_ini)/valor_ini);
   		
		cout << "Su variacion porcentual es del " <<VP <<"%";
		
		cout << "\n\nIntroduzca el valor inicial (negativo si no desea introducir mas valores): ";
		cin >> valor_ini;
	}
   	
	
	return 0;
}


/* Otra forma de hacerlo:
Esta forma de abajo es correcta, tecnicamente, pero en un examen quitaría puntuacion porque estamos haciendo dos veces
una comprobación de la misma variable (con el do..while y el if dentro de él). 
La version más eficiente es la de arriba (hecha en clase al corregir el ejercicio).

do{
   		cout << "Introduzca el valor inicial (negativo si no desea introducir mas valores): " <<endl;
		cin >> valor_ini;
		
		if (valor_ini >= 0){				// Si no es un numero negativo, pide el valor final. Si no, acabara el bucle do while	
			cout << "Introduzca el valor final (positivo, por favor): " <<endl;
			cin >> valor_fin;
		
			VP = abs(CIEN * (valor_fin - valor_ini)/valor_ini);
   		
			cout << "Su variacion porcentual es del " <<VP <<"%\n\n";
	   	}
	   	
	   }while (valor_ini >= 0);
*/










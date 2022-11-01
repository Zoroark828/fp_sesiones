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
   	
	
	return 0;
}













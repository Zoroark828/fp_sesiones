/*
Ejercicio 27, relacion de problemas 1. Creamos distintas expresiones logicas pedidas por el profesor.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	bool es_minuscula, es_menor_mayor, entre_valores, es_bisiesto, velocidad_elevada, es_vocal;
	char letra, vocal;
	int edad, adivine, anio, velocidad;

	cout << "Introduzca el valor, en este orden, de letra, edad, adivine, anio, velocidad, vocal: ";
	cin >> letra >> edad >> adivine >> anio >> velocidad >> vocal;
	
	// es_minuscula es true si letra es minuscula
	es_minuscula = letra >= 'a' && letra <= 'z';
	
	// es_menor_mayor es true si la edad es menor de 18 o mayor de 65
	es_menor_mayor = edad < 18 || edad > 65;
	
	// entre_valores es true si adivine es un numero entre el 1 y el 100
	entre_valores = adivine >= 1 && adivine <=100;
	
	// es_bisiesto es true si anio es un año bisiesto
	// Los años bisiestos son aquellos que, o bien son divisibles por 4 (es decir, año % 4 = 0) pero no por 100,
	// o bien son divisibles entre 400
	es_bisiesto = anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0);
	
	// velocidad_elevada es true si velocidad es mayor o igual a 100
	velocidad_elevada = velocidad >= 100;
	
	// es_vocal es true si vocal es, efectivamente, una vocal
	// Solo consideramos vocales a las minúsculas sin acentos
	es_vocal = vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u';
	
	cout << "\n\nEs " << letra << " una minuscula? " << es_minuscula;
	cout << "\nEs " << edad << " una edad menor que 18 o mayor que 65? " << es_menor_mayor;
	cout << "\nEsta " << adivine << " un numero entre el 1 y el 100? " << entre_valores;
	cout << "\nEs " << anio << " un anio bisiesto? " << es_bisiesto;
	cout << "\nEs " << velocidad << " una velocidad mayor que 100? " << velocidad_elevada;
	cout << "\nEs " << vocal << " una vocal? " << es_vocal;
		
	return 0;
}













/*
Ejercicio 28, relacion de problemas 2. El usuario introducirá tantos numeros enteros como quiera y el programa calculará
el numero de enteros que introdujo y el numero minimo entre ellos. Si mete un 0, el programa finalizará y ese 0 no
se contará ni para calcular el minimo ni para aumentar el numero de datos introducidos.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int dato, min;
	int introducidos = 0;
	int const FIN = 0;
	
	cout << "Introduzca un numero entero a evaluar (y un 0 para finalizar):";
	cin >> dato;
	
	min = dato;
	
	while (dato != FIN){
		introducidos++;
		
		if (dato < min)
			min = dato;
		
		cout << "Introduzca un numero entero a evaluar (y un 0 para finalizar):";
		cin >> dato;
		
	}
	
	cout << "Introducidos: " <<introducidos <<" Minimo: " <<min;
	
	
	
	/*
	Una vez hecho el programa, indique qué cambios debería realizar si los valores a leer
	son enteros negativos y el final de la entrada de datos lo marca la introducción de
	cualquier valor positivo
	
	. . .
	
	cout << "Introduzca un numero negativo a evaluar (y un numero positivo para finalizar):";
	cin >> dato;
	
	min = 0;								// Ponemos 0 y no dato porque si es un numero positivo el minimo tendrá que ser 0
											// Si el primer dato fuera negativo, dentro del bucle while se evalua igual :)
	while (dato < 0){
		introducidos++;
		
		if (dato < min)
			min = dato;
		
		cout << "Introduzca un numero entero a evaluar (y un 0 para finalizar):";
		cin >> dato;
		
	}
	
	cout << "Introducidos: " <<introducidos <<" Minimo: " <<min;
	
	*/
	
	
	
	
	return 0;
}













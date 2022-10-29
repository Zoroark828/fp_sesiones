/*
Ejercicio 21, relacion de problemas 2. Dado los valores de la esperanza, desviacion, un minimo, maximo e incremento
que cumplen la condicion que nosotros imponemos con un bucle do..while, el programa nos calcula los valores de la Gaussiana
desde el minimo hasta el maximo sumando cada vez el incremento introducido.

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const double PI = 6 * asin(0.5);   

	double esperanza, desviacion;
	double y;
	double tipificado, exponente;
	double minimo, maximo, incremento;
	
	cout << "Gaussiana\n\nIntroduzca el valor del parametro esperanza: ";
	cin >> esperanza;
	
	do{
	cout << "Introduzca el valor del parametro desviacion (mayor o igual que 0): ";
	cin >> desviacion;
	}while(desviacion<0);
	
	cout << "Introduzca el valor del minimo: ";
	cin >> minimo;
	
	do{
	cout << "Introduzca el valor del maximo (mayor estricto que el minimo): ";
	cin >> maximo;
	}while(maximo<=minimo);
	
	do{
	cout << "Introduzca el valor del incremento (extrictamente positivo): ";
	cin >> incremento;
	}while(incremento<=0);
	
	for (double x = minimo; x <= maximo; x += incremento){
		tipificado = ( x - esperanza) / desviacion;
		exponente = -0.5 * tipificado * tipificado;
	
		y = exp(exponente) / ( desviacion * sqrt(2*PI) );  
	
		cout << "\nCuando x =  " << x << ", y = " << y;		
	}
	
	
	
	return 0;
}




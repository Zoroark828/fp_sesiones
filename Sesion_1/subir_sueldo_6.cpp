/*
Ejercicio 6. A una variable double le incrementamos su valor en un 2%

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	double salario_base, salario_final;
	const double FACTOR = 1.02; 
	
	cout << "Introduzca el salario base: ";
	cin >> salario_base;
	
	salario_final = salario_base * FACTOR;
	
	cout << "El salario final es " << salario_final;
   
   return 0;
}













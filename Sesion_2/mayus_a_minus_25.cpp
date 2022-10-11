/*
Ejercicio 25. El usuario nos da una letra mayuscula y el programa la convierte en una minuscula.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	char mayus, minus;
	const int DIFERENCIA = 'a' - 'A';
	
	cout << "Introduce la mayuscula: ";
	cin >> mayus;
	
	minus = mayus + DIFERENCIA;
	
	cout << "\n" << mayus <<" en minuscula es " << minus << ".";
	
	return 0;
}













/*
Ejercicio 18 (OPCIONAL). Es como el ejercicio 15 de intercambiar 2 variables, pero con 3 variables esta vez.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int x, y, z;
	int copia_y;
	
	cout << "Introduce x: ";
	cin >> x;
	cout << "Introduce y: ";
	cin >> y;
	cout << "Introduce z: ";
	cin >> z;
	
	copia_y = y;
	y = x;
	x = z;	
	z = copia_y;

	
	cout << "\nLas nuevas variables son:";
	cout << "\nx: " << x;
	cout << "\ny: " << y;
	cout << "\nz: " << z;
	
	return 0;
}













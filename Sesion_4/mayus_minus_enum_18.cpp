/*
Ejercicio 18, relacion de problemas 2. Hacemos una conversión de mayuscula a minuscula o viceversa según el caracter que
introduzca el usuario.

En vez de utilizar dos variables bool (es_mayus y es_minus, por ejemplo), usaremos una clase enumerada con tres posibles valores,
ya que si usamos los booleanos tendremos que hacer más larga la evaluacion final.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

enum class TipoCaracter { mayuscula, minuscula, no_alfabetico };

int main(){
	char letra_convertida, letra_original;
	const int DISTANCIA_MAY_MIN = 'a'-'A';
	TipoCaracter tipo_caracter;
	
	cout << "\nIntroduzca una letra  --> ";
	cin >> letra_original;
	
	// Hacemos la conversión
	if ((letra_original >= 'A') && (letra_original <= 'Z')){
		letra_convertida = letra_original + DISTANCIA_MAY_MIN;
		tipo_caracter = TipoCaracter::mayuscula;
	}
	else if ((letra_original >= 'a') && (letra_original <= 'z')){
		letra_convertida = letra_original - DISTANCIA_MAY_MIN;
		tipo_caracter = TipoCaracter::minuscula;
	}
	else
		tipo_caracter = TipoCaracter::no_alfabetico;

	// Imprimimos el resultado
	if (tipo_caracter == TipoCaracter::mayuscula)
		cout <<"La letra era una mayuscula. Una vez convertida es " << letra_convertida;
	else if (tipo_caracter == TipoCaracter::minuscula)
		cout << "La letra era una minuscula. Una vez convertida es " << letra_convertida;
	else if (tipo_caracter == TipoCaracter::no_alfabetico)
		cout << "El caracter no es una letra. ";
	
		
	return 0;
}













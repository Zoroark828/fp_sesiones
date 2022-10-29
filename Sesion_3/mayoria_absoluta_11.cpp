/*
Ejercicio 11, relacion de problemas 2. Calculamos si hay error en los votos, si un partido tiene la mayoria absoluta,
o de que forma podria pactar para obtenerla si es que puede. El usuario ingresará los votos presenciales y por correo
de los tres partidos.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int presencialA, correoA, presencialB, correoB, presencialC, correoC;		// Votos por separado de cada partido
	int votosA, votosB, votosC;													// Variables para el total de los votos de cada partido
	int suma_total;
	bool mayoriaA, mayoriaB, mayoriaC;											// bool de la mayoria para cada partido individualmente
	bool coalicionAB, coalicionAC, coalicionBC;									// bool de las posibles coaliciones entre partidos
	
	cout<<"Introduzca los votos presenciales y por correo de los partidos A, B y C en ese orden: ";
	cin>> presencialA>> correoA>> presencialB>> correoB>> presencialC>> correoC;
	
	// Calculamos el total de los votos de cada partido y la suma total de todos
	votosA = presencialA + correoA;
	votosB = presencialB + correoB;
	votosC = presencialC + correoC;
	suma_total = votosA + votosB + votosC;
	
	// Damos valor a las variables bool que comprueban si cada partido tiene la mayoria absoluta por sí mismo
	// Se tiene la mayoria absoluta si el numero de votos es mayor estricto que la suma total de votos entre 2
	mayoriaA = votosA > suma_total / 2.0;
	mayoriaB = votosB > suma_total / 2.0;
	mayoriaC = votosC > suma_total / 2.0;
	
		
	if(suma_total == 0)
		cout<<"\nError en los datos.";
	
	else if(mayoriaA)
		cout<<"\nEl partido A consiguio la mayoria absoluta.";
		
	else if(mayoriaB)
		cout<<"\nEl partido B consiguio la mayoria absoluta.";

	else if(mayoriaC)
		cout<<"\nEl partido C consiguio la mayoria absoluta.";

	else{					// COALICIONES //				
		coalicionAB = votosA + votosB > suma_total /2;
		coalicionAC = votosA + votosC > suma_total /2;
		coalicionBC = votosB + votosC > suma_total /2;
		
		// No utilizamos conficionales if anidados porque podrían haber distintas combinaciones de partidos que den
		// a la vez mayoría absoluta
		if(coalicionAB)
			cout<<"\nLos partidos A y B podrian conseguir juntos la mayoria absoluta.";
		
		if(coalicionAC)
			cout<<"\nLos partidos A y C podrian conseguir juntos la mayoria absoluta.";

		if(coalicionBC)
			cout<<"\nLos partidos B y C podrian conseguir juntos la mayoria absoluta.";

	}
		
	
	
	
	return 0;
}













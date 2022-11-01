/*
Ejercicio 16, relacion de problemas 2. Dado un condicional mal expresado y con codigo repetido e innecesario, tenemos
que arreglarlo para que sea m�s conciso.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	
	double bodyTemperature;
	bool difficultyBreathing, diabetes, cancer;
	char opcion;
   
	cout << "Detecci�n Aproximada de COVID-19\n\n\n"
   	    << "Introduzca la temperatura y a continuaci�n conteste S/N a las siguientes preguntas:\n\n"
   	    << "- �Tiene deficultades para respirar?\n"
        << "- �Es diab�tico?\n"
        << "- �Tiene alg�n tipo de c�ncer?\n\n";
        
	cin >> bodyTemperature;
	cin >> opcion;
	difficultyBreathing = toupper(opcion) == 'S';
	cin >> opcion;
	diabetes = toupper(opcion) == 'S';
	cin >> opcion;
	cancer = toupper(opcion) == 'S';
   
   /* 
   Arr�gle el siguiente c�digo:
   
   if((bodyTemperature >= 38 && difficultyBreathing) ||
      (bodyTemperature >= 38 && difficultyBreathing && diabetes) ||
      (bodyTemperature >= 38 && difficultyBreathing && cancer) ||
      (bodyTemperature >= 38 && diabetes) ||
      (bodyTemperature >= 38 && cancer))
      cout << "Consulte autoridades locales";
   else 
      if (bodyTemperature >= 38)
         cout << "Cuarentena en su casa";
      else 
         if (bodyTemperature < 38)
            cout << "Test negativo";
         else
            cout << "Test negativo";   
	
	*/
	
	if ((bodyTemperature >= 38) && (difficultyBreathing || diabetes || cancer))	// Si bodyTemp se cumple y AL MENOS 1 de los otros, procede
		cout << "Consulte autoridades locales";
	else if (bodyTemperature >= 38)	// Si el compilador ha llegado hasta aqui es porque NINGUNO de los otros se cumple. No hace falta volver a comprobarlo
		cout << "Cuarentena en su casa";
	else 									// Si no se cumple que la temperatura es >= a 38, procedemos
		cout << "Test negativo";
	





		
	return 0;
}













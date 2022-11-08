/*
Estos dos ejercicios pertenecian a la Sesion 6, pero son de los que debiamos comprender leyendo los ejercicios ya hechos por el
profesor. No obstante, vi el enunciado de este y me dio curiosidad intentarlo por mi misma. Asi que esta es la forma en la que yo
lo hice :)

La solucion del profesor está hecha de otra forma y te recomiento que la entiendas tambien. Aunque antes de hacer eso te invito
a que lo intentes por ti mismo! Al rato de darle vueltas, verás como consigues hacer los bucles bien!

Ejercicios: Piramide (36) y Cuadrado (37) de la relacion de ejercicios numero 2.

Autora: @Zoroark828
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
	int numero;
	int numero_display;			// Esta es la variable que almacenará los valores cambiantes del numero
	int num_filas, num_column_piram;
	
	cout << "Introduce el numero inicial: ";
	cin >> numero;
	cout << "Introduce el numero de filas: ";
	cin >> num_filas;
	
	cout << "\nCUADRADO:\n";
	
	for (int i = 0 ; i < num_filas; i++){
		numero_display = numero + i;			// Sumamos la fila por la que vamos al numero que mostraremos por pantalla
		for (int j = 0; j < num_filas; j++){
			cout << numero_display << " ";		// Imprimimos el numero
			numero_display++;					// Le sumamos un 1 y hacemos este bucle hasta acabar con la fila :)
		}
		cout << "\n";							// Este es el salto de linea que separa las filas entre sí
	}
	
	cout << "\n\nPIRAMIDE:\n";
	
	
	num_column_piram = num_filas;				// Inicializamos el numero de columnas que imprimiremos al numero de filas
												// porque la primera columna tiene los mismos elementos que el total de filas
	for (int i = 0; i < num_filas; i++){
		numero_display = numero + i;
		for (int j = 0; j < num_column_piram; j++){
			cout << numero_display << " ";
			numero_display++;
		}
		num_column_piram--;						// Cuando imprimimos una fila completa, necesitamos que la siguiente imprima una columna menos
		cout << "\n";							// que la anterior, asi que la restamos :)
	}
		
	
	
	return 0;
}








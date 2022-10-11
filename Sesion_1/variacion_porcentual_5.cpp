/*
Ejercicio 5. Programa que calcula la variación porcentual a partir de su formula

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double valorIni, valorFin, VP;
   const int CIEN = 100;
   
   cout << "Introduzca el valor inicial: " <<endl;
   cin >> valorIni;   
   cout << "Introduzca el valor final: " <<endl;
   cin >> valorFin;
   
   VP = abs(CIEN * (valorFin - valorIni)/valorIni);
   
   cout << "Su variacion porcentual es del " <<VP <<"%";   
   
   return 0;
}













/*
Ejercicio 4. Calculamos PI a partir de la formula del arcoseno

Autora: @Zoroark828
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
   float PI;
   const int SEIS = 6;
   const float CEROCONCINCO = 0.5; 
      
   // Hemos despejado de la ecuación (PI / 6) = arcoseno(0.5)
   
   PI = asin(CEROCONCINCO) * SEIS;
   
   cout << "Pi = " << PI;
   
   
   return 0;
}













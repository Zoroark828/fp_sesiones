/*
Ejercicio 6, relacion de problemas 2.En este ejercicio no hace falta construir ningún programa. Debemos explicar
qué problemas observamos en los distintos condicionales.

Autora: @Zoroark828

a)
	char tipo_radar;
	cin >> tipo_radar;
	if (tipo_radar == 'F' && tipo_radar == 'f')
	......
	
	Problema: esta condicion nunca se va a cumplir. El AND (&&) obliga a que ambas condiciones se cumplan
	a la vez para ejecutar lo que indica el if a continuación. Un caracter tipo char jamás podra ser dos
	caracteres distintos a la vez. Para arreglar esto deberiamos usar el operador OR (||), para que si una de
	las dos condiciones se cumple, el if se ejecute.
	
b)	
	double velocidad;
	cin >> velocidad;
	if (velocidad > 100 && velocidad < 70)
	cout << "\nVelocidad fuera del rango";
	
	Problema: estamos ante el mismo problema por el operador AND. Ningun numero será jamás mayor que 100 y a
	la vez menor que 70. Para arreglarlo, podriamos usar el operador OR dependiendo de lo que pida el ejercicio
	original.
	
	
c)	
	double velocidad;
	cin >> velocidad;
	if (velocidad > 100 || velocidad > 110)
	cout << "Velocidad excesiva";
	
	Problema: estamos añadiendo una condicion redundante. Si un numero es mayor que 110, tambien será mayor que 100,
	asi que debemos decidir segun el problema inicial, si esta condicion se cumple siempre que la velocidad es mayor
	que 110 o si se cumplirá cuando sea mayor que 100, pero no debemos poner ambas condiciones.
	
	
	
	
	
	
	
	
	

*/

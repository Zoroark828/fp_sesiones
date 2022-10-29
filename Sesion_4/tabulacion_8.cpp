/*
Ejercicio 8, relacion de problemas 2.

Autora: @Zoroark828


a) 
if (edad > 18)
es_mayor_edad = true;
else es_mayor_edad = false;


Forma correcta:

	if (edad > 18)
		es_mayor_edad = true;
	else 
		es_mayor_edad = false;





b) 
if (edad > 18)
if (ingresos <= MAX_INGRESOS)
suscept_ayuda = true;
else suscept_ayuda = false;
else if (ingresos > MIN_INGRESOS)
suscept_ayuda = true;
else
suscept_ayuda = false;


Forma correcta:

	if (edad > 18)
		if (ingresos <= MAX_INGRESOS)
			suscept_ayuda = true;
		else 
			suscept_ayuda = false;
	else if (ingresos > MIN_INGRESOS)
		suscept_ayuda = true;
	else
		suscept_ayuda = false;









Duda: ¿que ocurre en este caso? Si quitamos el else de dentro del anterior ejemplo...

if (edad > 18)
		if (ingresos <= MAX_INGRESOS)
			suscept_ayuda = true;
		
	else if (ingresos > MIN_INGRESOS)
		suscept_ayuda = true;
	else
		suscept_ayuda = false;





*/

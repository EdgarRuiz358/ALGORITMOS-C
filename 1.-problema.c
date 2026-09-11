/*ELABORAR UN ALGORITMO QUE PERMITA CONVERTIR GRADOS FAHRENHEIT A CELSIUS Y VICEVERSA*/
#include <stdio.h>

/* ESTRUCTURA BASE */

int main(){
	int celsius; 														// VARIABLE CELSIUS
	int f;																// VARIABLE
	printf("%s","Ingresa los grados Celsius: ");						// MUESTRA MENSAJE DE GRADOS CELSIUS A INGRESAR
	
	scanf("%d", &celsius);												// ALMACENA EL DATO INGRESADO EN LA VARIABLE CELSIUS
	//printf("El valor ingresado fue: %d", celsius);
	printf("%s","Conversion de Celsius a Farenheit: ");					// MUESTRA MENSAJE DE PARA EL RESULTADO DE CONVERSION DE GRADOS C A F
	
	float operacion_c = (celsius*1.8)+32;								// OPERACION PARA CONVERSION CELSIUS A FAHRENHEIT
	
	printf("%f", operacion_c);											// IMPRIME LA CONVERSION DE DATOS A FAHRENHEIT
	
	printf("\nIngrese los grados Farenheit: ");							// MUESTRA MENSAJE DE GRADOS FAHRENHEIT A INGRESAR
	
	scanf("%d", &f);													// ALMACENA EL DATO INGRESADO EN LA VARIABLE FAHRENHEIT
	
	printf("%s","Conversion de Farenheit a Celsius: ");					// MUESTRA MENSAJE PARA EL RESULTADO DE CONVERSION DE GRADOS F A C
	float operacion_f = (f-32)/1.8;										// OPERACION PARA CONVERSION DE FAHRENHEIT A CELSIUS
	
	printf("%f", operacion_f);											// IMPRIME LA CONVERSION DE DE DATOS A CELSIUS 
	
	
	
	
	
    return 0;															//
    }// main
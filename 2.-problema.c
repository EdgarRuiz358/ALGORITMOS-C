//diseñar un algoritmo que calcule el total de una venta de tres productos
#include <stdio.h>

/* ESTRUCTURA BASE */
int main(){
	int a;														// VARIABLE DECLARADA DEL PRIMER PRODUCTO
	int b;														// VARIABLE DECLARADA DEL SEGUNDO PRODUCTO
	int c;														// VARIABLE DECLARADA DEL TERCER PRODUCTO
	
	printf("%s","ingrese el valor del producto a: ");			// IMPRIME MENSAJE PARA INGRESAR EL VALOR DEL PRIMER PRODUCTO
		scanf("%d", &a);										// ALAMCENA EL VALOR INGRESADO PARA EL PRIMER PRODUCTO
		
	printf("%s","ingrese el valor del producto b: ");			// IMPRIME MENSAJE PARA INGRESAR EL VALOR DEL SEGUNDO PRODUCTO
		scanf("%d", &b);										// ALAMCENA EL VALOR INGRESADO PARA EL SEGUNDO PRODUCTO
		
	printf("%s","ingrese el valor del producto c: ");			// IMPRIME MENSAJE PARA INGRESAR EL VALOR DEL TERCER PRODUCTO
		scanf("%d", &c);										// ALAMCENA EL VALOR INGRESADO PARA EL TERCER PRODUCTO

	float operacion=a+b+c;										// REALIZA LA OPERACION DE LA SUMA DE LOS 3 PRODUCTOS
	printf("%s","el Valor total de la venta es: ");				// IMPRIME MENSAJE PARA DECIR EL VALOR TOTAL DE LA VENTA
	printf("%f",operacion);										// IMPRIME MENSAJE PARA EL RESULTADO DE LA OPERACION
    return 0;
    }// main
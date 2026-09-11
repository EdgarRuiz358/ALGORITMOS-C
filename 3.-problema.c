/*diseñar un algoritmo que lea el nombre de un empleado, su salario basico por hora
y el numero de horas trabajadas al dia . calcular sus salario mensual e imprimir tanto el nombre como su salario
*/
#include <stdio.h>
int main(){
	
	char nombre[50];											// VARIABLE DECLADARA PARA INGRESAR CARACTERES MAXIMO 50
	int salario_hora;											// VARIABLE DECLARADA  SALARIO POR HORA
	int salario_basico;											// VARIBLE DECLARADA SALARIO BASICO

	printf("%s","ingrese el Nombre de empleado: ");				// IMPRIME MENSAJE PARA SOLICITAR EL NOMBRE DEL TRABAJADOR
		scanf("%s", &nombre);									// SE INGRESA Y ALMACENA EL NOMBRE DEL TRABAJADOR
		
	printf("%s","ingrese el numero de horas trabajadas: ");		// IMPRIME MENSAJE PARA SOLICITAR LAS HORAS TRABAJADAS
		scanf("%d", &salario_hora);								// SE ALMACENA EL DATO INGRESADO EN LA VARIABLE SALARIO_HORA
		
	printf("%s","ingrese salario basico: ");					// IMRPIME MENSAJE PARA SOLICITAR EL SALARIO BASE
		scanf("%d", &salario_basico);							// SE ALMACENA EL DATO INGRESADO DE SALARIO BASE EN LA VARIABLE SALARIO_BASICO

	float salario_mensual=(salario_hora*salario_basico)*30;		// SE DELCARA VARIABLE SALARIO_MENSUAL PARA REALIZAR LA OPERACION DE SALARIO MENSUAL
	printf("%s", "nombre del empleado: ");						// IMPRIME ETIQUERA PARA EL NOMBRE DEL EMPLEADO
	printf("%s",nombre);										// IMPRIME NOMBRE INGRESADO
	printf("%s", "\nsalario mensual: ");						// IMPRIME SALTO DE LINEA CON SALARIO MENSUAL
	printf("%f",salario_mensual);								// IMPRIME EL RESULTADO CALCULADO PARA EL SALARIO MENSUAL

    return 0;
    }// main
/*
autor: juan david hoyos ramirez
fecha: 11/09/2018
programa: cuadrado de un numero 
*/
#include <stdio.h>
#include <stdlib.h>
//llamando a la funcion 
void cuadrado();
//funcion principal
int main()
{
	cuadrado();
}
void cuadrado()
{
	//declarando las variables
	float num,resul;
	printf ("ingrese un numero: ");
	scanf ("%f",&num); //dato ingresado por teclado
	resul=num*num;//proceso
	printf("el cuadrado del numero ingresado es: %f", resul);
}



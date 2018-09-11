/*
autor: juan david hoyos ramirez
fecha: 11/09/2018
programa:mostrar el nombre con mayor cantidad de caracteres
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	//declaracion de variables
	int z=0,x=0;
	char t1[100]; 
	char t2[100];
	//informacion ingresada por el usuario
	printf("ingrese el primer nombre: ");
	gets(t1);
	printf("ingrese el segundo nombre: ");
	gets(t2);
	
	z=strlen(t1);
	x=strlen(t2);
		//decision para mostrar el nombre de mayor caracter
	if( z >=x)
	{
		printf("%s ",t1);
		printf("%s ",t2);
		
	}
	if(z <=x)
	{
		printf("%s ",t2);
		printf("%s ",t1);
	}
	
	
	return 0;
}


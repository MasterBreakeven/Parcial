/*
autor: juan david hoyos ramirez
fecha: 11/09/2018
programa: cantidad de pares y cantidad de impares
*/
#include <stdio.h>
#include <stdlib.h>
//funicion principal
int main()
{
	//declaracion de variables
	int num,acu=0,acu2=0;
	do{
		printf("ingrese un numero: ");
		scanf("%d",&num);//dato ingresado por teclado
		//decisiones verifica si es par o impar
		if(num%2==0)
		{
			acu=acu+1;
		}
		else
		{
			acu2=acu2+1;
		}
	}while(num>=1);
	//resultado
	printf("la cantidad de numeros pares es: %d\n",acu-1);
	printf("la cantidad de numeros impares es: %d",acu2);
}

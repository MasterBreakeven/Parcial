/*
autor: juan david hoyos ramirez
fecha: 11/09/2018
programa:devolver vocales
*/
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
//declaro las variables
char frase[40]; 
int a,b; 

main(){ 
	
	//ingresa datos por teclado
	printf("ingrese una frase: "); 
	gets(frase);
	
	// compara y cuenta las vocales de la palabra
	for(a=0;a<40;a++){ 
		switch (frase[a]){ 
		case 'a': b=b+1; 
		break; 
		case 'e': b=b+1; 
		break; 
		case 'i': b=b+1; 
		break; 
		case 'o': b=b+1; 
		break; 
		case 'u': b=b+1; 
		break; 
		} } 
	
	printf("la cantidad de vocales es %d\n",b); 
	
	getch(); 
	 
	return 0; 
}

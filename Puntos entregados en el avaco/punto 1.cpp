/*
autor: juan david hoyos ramirez
fecha: 11/09/2018
programa:saber en que nivel esta
*/


#include <iostream> 

#include <conio.h> 

using namespace std;

int main()
{
	//declaracion de variables
	float preguntas,acertadas;
	float porcentaje;
	char seguir;
	//proceso
	do 
	{
		printf("ingrese la cantidad de preguntas hechas: ");
		scanf ("%f",&preguntas);
		printf("ingrese la cantidad de preguntas acertadas: ");
		scanf ("%f",&acertadas);
		
		porcentaje=acertadas/preguntas;
		//decisiones
		if (porcentaje>=0.85)
		{
			printf("tiene el nivel maximo %.2f\n",porcentaje);
		}
		if(porcentaje >=0.71 && porcentaje<0.85)
		{
		  printf("tiene un nivel medio %.2f\n",porcentaje);
		}
		if(porcentaje>=0.40 && porcentaje<0.70)
		{
			printf("tiene un nivel regular %.2f\n",porcentaje);
		}

		if(porcentaje<40)
		{
			printf("usted esta por fuera del nivel %.2f\n",porcentaje);
		}
		
		printf( "\n Desea introducir otro empleado (s/n)?: " );
		fflush( stdin );
		scanf( "%c", &seguir);
		
	}while ( seguir != 'n' );//compara para saber si se debe volver a ejecutar
	
	return 0;
}


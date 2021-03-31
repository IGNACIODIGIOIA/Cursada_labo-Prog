/*
 * funciones.c
 *
 *  Created on: 30 mar. 2021
 *      Author: ignac
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

static int getInt(int* pResultado);
static int esNumerica(char* cadena, int limite);

int CalcularMaximoArray(int* array, int limite, int* resultado)
{	int i;
	for (i=0; i<*array; i++)
	{
		printf("Ingrese un numero: ");
			getint(*array);

	}


}
/*int CalcularMinimoArray(int* array, int limite, int* resultado)
{

}
int PromedioArray(int* array, int limite, float* resultado)
{

}
int arr_calcularSumaInt(int* array,int limite, float* resultado)
*/
static int getInt(int* pResultado)
{
    int retorno=-1;
    char bufferString[50];
    if(	pResultado != NULL &&
    	getString(bufferString,sizeof(bufferString)) == 0 &&
    	esNumerica(bufferString,sizeof(bufferString)))
	{
		retorno=0;
		*pResultado = atoi(bufferString) ;

	}
    return retorno;
}

static int esNumerica(char* cadena, int limite)
{
	int retorno = -1; // ERROR
	int i;
	if(cadena != NULL && limite > 0)
	{
		retorno = 1; // VERDADERO
		for(i=0;i<limite && cadena[i] != '\0';i++)
		{
			if(i==0 && (cadena[i] == '+' || cadena[i] == '-'))
			{
				continue;
			}
			if(cadena[i] < '0'||cadena[i] > '9')
			{
				retorno = 0;
				break;
			}
			//CONTINUE
		}
		//BREAK
	}
	return retorno;
}

#include <stdio.h>
//Objetivo:COMVIERTE LOS GRADOS FARENHEIT A KELVEN
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016
	
int main(){

		printf("COMVIERTE LOS GRADOS FARENHEIT A KELVEN\n\n");
	//Variables
	float F,resultado;
	
	printf("Dame los grados farenheit:");
	scanf("%f",&F);
    resultado=(((F-32)/1.8)+273);
	printf("Grados kelvin= %f",resultado);
		
	
}

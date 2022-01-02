#include <stdio.h>
//Objetivo:CONVIERTE LOS GRADOS CENTIGRADOS A FARENHEIT
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016

int main(){
	printf("CONVIERTE LOS GRADOS CENTIGRADOS A FARENHEIT\n\n");
	float C,resultado;
	printf("Dame los grados Centigrados:");
	scanf("%f",&C);
	resultado=((C*9)/5)+32;
	printf("estos son los grados en F: %f",resultado);
}

#include<stdio.h>
//Objetivo:Sacar perimetro de un rectangulo 
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016

int main (){
	//declarar variables
printf("SACA EL PERIMETRO DE UN RECTANGULO\n\n");
	int a,b,resultado;
	
	printf("Dame ancho:");
	scanf("%d",&a);
	printf("Dame altura:");
	scanf("%d",&b);
	resultado=a+a+b+b;
	printf("El perimetro es: %d",resultado);
	}

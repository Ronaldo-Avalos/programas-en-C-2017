#include <stdio.h>
//Objetivo:CALCULA EL AREA DE UN TRAPECIO
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016

int main (){
    //variable
    printf("CALCULA EL AREA DE UN TRAPECIO\n\n");
	int a,b,c,resultado;
	printf("CALCULA EL AREA DEL TRAPECIO\n\n");
	printf("Dame el valor de base menor:");
	scanf("%d",&a);
	printf("Dame el valor de base mayor:");
	scanf("%d",&b);
	printf("Dame el valor de haltura:");
	scanf("%d",&c);
	resultado=(a+b)*c/2;
	printf("El area es: %d",resultado);}

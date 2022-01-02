#include <stdio.h>
//Objetivo:Sacar árrea de un triangulo
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016


 int main(){
 	//variables
 	int B,H,resultado;
 	printf("CALCULA EL AREA DE UN TRIANGULO\n\n");
 	printf("Dame el valor de base:");

	scanf("%d",&B);
	printf("Dame el valor de haltura:");
	scanf("%d",&H);
	resultado=B*H/2;
	printf("Esta es el area de tu triangulo: %d",resultado);
 }

#include <stdio.h>
//Objetivo:PRODUCTO DE 4 NUMEROS LEIDOS 
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016

int main(){
//nombre de variables
printf("MULTIPLICACION DE 4 NUMEROS\n\n");
	int A,B,C,D,resultado;
    
printf("Dame un numero:");
scanf("%d",&A);
printf("Dame otro numero:");
scanf("%d",&B);
printf("Dame otro numero:");
scanf("%d",&C);
printf("Dame otro numero:");
scanf("%d",&D);
resultado=A*B*C*D;
printf("el resultado es: %d \n\n",resultado);
}

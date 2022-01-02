#include <stdio.h>
//Objetivo: VER SI UN NUMERO ES DIVISIBLE CON OTRO
//Autor:JAIR ROLON
//Fecha: 8-10-2016
int main(){
	
	int A,B;
	
	printf("Dame un numero:");
	scanf("%d",&A);
	printf("Dame otro numero:");
	scanf("%d",&B);
	
	if(A/B==2)
	{
		printf("El %d es divisible con %d",A,B);

	}
	else
	{
		printf("El %d no es divisible con %d",A,B);
	}
}

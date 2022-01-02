//Objetivo: AVERIGUAR SI UN NUMERO ES PAR O IMPAR
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016

#include <stdio.h>
int main(){
	int A;
	printf("       AVERIGUA SI UN NOMERO ES PAR O IMPAR\n");
	printf("Dame un valor:");
	scanf("%d",&A);
	
	
	if(A%2==0){
		printf("%d es par ",A);
	}
	else
	{
		printf("%d es impar",A);
	}
}

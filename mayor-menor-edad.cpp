#include <stdio.h>
//Objetivo:decir si alguien es moyor o no mayor de edad
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
	int B;
	printf("                           TE DIRE SI ERES O NO MAYOR DE EDAD\n\n");
	printf("Dame tu edad:");
	scanf("%d",&B);
	
	if(B<18)
	{
		printf("Eres menor de edad");
	
	}
	
	else
	{
		printf("Eres mayor de edad");
	}
	

	
}

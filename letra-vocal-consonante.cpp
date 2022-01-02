
#include <stdio.h> 
//Objetivo: AVERIGUAR SI LA LETRA ES VOCAL O CONSONANTE
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
	char c;
	printf("Dame una letra y te dire si es vocal o consonante\n");
	scanf("%c",&c);
	 
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("tu letra es una vocal");
	}
	else
	{
		printf("tu letra es consonante");
	}
}

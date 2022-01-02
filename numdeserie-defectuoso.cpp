
#include <stdio.h> 
//Objetivo: AVERIGUAR SI UN NOMERO DE SERIE ESTA O NO DEFECTUOSO
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
int B;

printf("Dame el numeo de serie:");
scanf("%d",&B);

if(B<1035||B>17790){ 

printf("%d no esta defectuoso",B);
	}
else
{
	printf("%d si esta defectuoso",B);
}
}

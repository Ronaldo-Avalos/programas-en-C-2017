#include <stdio.h>
//Objetivo:VER SI  UN NUMERO ES NEGATIVO, POSITIVO O NULO
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
	int t;
	printf("    TE DIRE SI UN NUMERO ES NEGATIVO, POSITIVO O NULO\n");
	printf("Dame un numero:");
	scanf("%d",&t);
	
	if(t==0)
	{
	printf("%d es nulo",t);
	}
	if(t<0)
{
	printf("%d es negativo",t);
}  
if(t>0)
{
	printf("%d es positivo",t);
}
}
	

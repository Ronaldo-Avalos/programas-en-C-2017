#include <stdio.h>
//Objetivo:decir si un 2 numeros son iguales o cual es mayor
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
	int c,a;
	printf("                             TE DIRE SI UN NUMERO ES MAYOR QUE OTRO O SI SON IGUALES\n\n");
	printf("Dame un numero:");
	scanf("%d",&c);
	printf("Dame otro numero:");
	scanf("%d",&a);
	
if(c==a){
	printf("Los numeros son iguales");}

if(c>a)
{
	printf("%d es mayor a %d",c,a);
}
else{

 if(c<a)
{
	printf("%d es mayor a %d",a,c);
}
}
 
 
 }



	






	

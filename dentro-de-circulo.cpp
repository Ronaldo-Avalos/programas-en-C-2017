#include <stdio.h>
#include <math.h>
//Objetivo: 
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
int main(){
	
	
	float x,y,r,d;
	printf("Dame la cordenada X:");
	scanf("%f",&x);
		printf("Dame la cordenada y:");
	scanf("%f",&y);
		printf("Dame el radio:");
	scanf("%f",&r);

      d=sqrt(x*x+y*y);
      
      if(d<r)
      {
      	printf("Esta dentro del circulo");
	  }
     else
     {
     	if(d==r)
     	printf("esta sobre el circulo");
	 
     else{

printf("Esta fuera del circulo");}}
}

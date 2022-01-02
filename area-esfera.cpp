# include <stdio.h>
//Objetivo:CALCULA EL AREA DE UNA ESFERA
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016

int main(){
	 
	//variables 
	printf("CALCULA EL AREA DE UNA ESFERA\n\n");
    float radio,resultado;

	printf("Dame el radio de la esfera:");
	scanf("%f",&radio);
	resultado=(((1.33)*(3.14))*(radio*radio*radio));
	printf("El volumen de tu esfera es: %f",resultado);
}

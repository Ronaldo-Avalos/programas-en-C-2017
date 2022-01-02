//Objetivo:DECIR SI EL USUARIO SE FUE O NO A ORDI
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016

#include <stdio.h>


int main(){
	
	float A,B,C,X,R;
	printf("CALCULA TU PROMEDIO Y SI SI TE IRAS A ORDI O NO\n\n");
	printf("Dame tu promedio de tu primera parcial:");
	scanf("%f",&A);
    printf("Dame tu promedio de tu segunda parcial:");
	scanf("%f",&B);
	printf("Dame tu promedio de tu tercera parcial:");
	scanf("%f",&C);
	
	X=A+B+C;
	if(X<24)
	{
			printf("\nTE FUISTE A ORDI");
	 R=X/3;
	printf("\nPorque  tu promedio es de:%f",R);
	     
		
	
	}
	else
	{
		printf("\nNO TE FUISTE A ORDI");
		 R=X/3;
	printf("\nPorque tu promedio es de:%f",R);
	}
	}

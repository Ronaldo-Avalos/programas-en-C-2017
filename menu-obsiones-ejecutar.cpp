
//Objetivo:DAR UN MENU DE OBCIONES Y EJECUTAR LA OBCION ELEGIDA
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
#include<stdio.h>
  int main(){
   
   int a;

   printf("_____________________________________________________\n");
   printf("° Teclea 1 si quieres relizar una suma              °\n");
   printf("° Teclea 2 si quieres relizar una resta             °\n");
   printf("° Teclea 3 si quieres relizar una multiplicacion    °\n");
   printf("° Teclea 4 si quieres relizar una division          °\n");
   printf("°___________________________________________________°\n");
   scanf("%d",&a);
   
   switch(a){
        case 1:
        	int A,B,C;
   		printf("ESCOGISTE SUMA\n\n");
   		printf("Dame un numero:");
   		scanf("%d",&A);
   		printf("Dame otro numero:");
   		scanf("%d",&B);
   		C=A+B;
   		printf("la sumatoria de %d y %d es: %d",A,B,C);
		    break;
 case 2:
        	int A1,B1,C1;
   		printf("ESCOGISTE RESTA\n\n");
   		printf("Dame un numero:");
   		scanf("%d",&A1);
   		printf("Dame otro numero:");
   		scanf("%d",&B1);
   		C1=A1-B1;
   		printf(" %d menos %d es: %d",A1,B1,C1);
		    break;
		    
case 3:
        	int A2,B2,C2;
   		printf("ESCOGISTE MULTIPLICACION\n\n");
   		printf("Dame un numero:");
   		scanf("%d",&A2);
   		printf("Dame otro numero:");
   		scanf("%d",&B2);
   		C2=A2*B2;
   		printf(" %d por %d es: %d",A2,B2,C2);
		    break;
		    
 case 4:
        	int A3,B3,C3;
   		printf("ESCOGISTE DIVISION\n\n");
   		printf("Dame un numero:");
   		scanf("%d",&A3);
   		printf("Dame otro numero:");
   		scanf("%d",&B3);
   		C3=A3/B3;
   		printf("%d entre %d es: %d",A3,B3,C3);
		    break;
		    
}		    
		   
}


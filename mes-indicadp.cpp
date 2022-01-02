//Objetivo:DECIR QUE MES ES SEGUN EL NUMERO INDICADO
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016

#include<stdio.h>
  int main(){
   int a;
   
   printf("Dame un numero del 1 al 12 y te dire que mes es\n");
   scanf("%d",&a);
   
   
   switch(a){
        case 1:
   		printf("ES ENERO");
   		break;
   	   	case 2:
   		printf("ES FEBRERO");
   		break;
   	   	case 3:
   		printf("ES MARZO");
   		break;   
   	   	case 4:
   		printf("ES ABRIL");
   		break;
   	   	case 5:
   		printf("ES MAYO");
   		break;
   	   	case 6:
   		printf("ES JUNIO");
   		break;
   	   	case 7:
   		printf("ES JULIO");
   		break;
   	   	case 8:
   		printf("ES AGOSTO");
   		break;
        case 9:
   		printf("ES SEPTIEMBRE");
   		break;
      	case 10:
   		printf("ES OCTUBRE");
   		break;		
      	case 11:
   		printf("ES NOVIEMBRE");
   		break;
	   	case 12:
   		printf("ES DICIEMBRE");
   		break;	   		
   }
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  }

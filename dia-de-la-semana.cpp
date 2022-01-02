
//Objetivo:DECIR QUE DIA DE LA SEMANA ES 
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
#include<stdio.h>
  int main(){
  
   int tp;
   
   printf("TE DIRE QUE DIA DE LA SEMANA ES\n");
   printf("Dame un numero del 1 al 7 :");
   scanf("%d",&tp);
   
   switch(tp){
        case 1:
   		printf("EL 1 ES LUNES");
   		break;
        case 2:
   		printf("EL 2 ES MARTES");
   		break;
   	    case 3:
   		printf("EL 3 ES MIERCOLES");
   		break;
		case 4:
   		printf("EL 4 ES JUEVES");
   		break;
		case 5:
   		printf("EL 5 ES VIERNES");
   		break;	
        case 6:
   		printf("EL 6 ES SABADO");
   		break;
        case 7:
   		printf("EL 7 ES DOMINGO");
   		break;
   	}
}







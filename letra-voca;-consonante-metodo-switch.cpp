
//Objetivo: AVERIGUAR SI  ES VOCAL O CONSONANTE CON EL METODO DE SWITCH
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016
#include<stdio.h>
  int main(){
  
   char V;
   
   printf("TE DIRE SI ES VOCAL O CONSONANTE\n");
   printf("dame una letra:");
   scanf("%c",&V);
   
      switch(V){
        case 'a':
   		printf("ES VOCAL");
   		break;
        case 'e':
   		printf("ES VOCAL");
   		break;
   	    case 'i':
   		printf("ES VOCAL");
   		break;
		case 'o':
   		printf("ES VOCAL");
   		break;
		case 'u':
   		printf("ES VOCAL");
   		break;
   		default:
   		printf("ES CONSONANTE");}
   	}

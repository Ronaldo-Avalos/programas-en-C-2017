#include <stdio.h> 
//Objetivo: AVERIGUAR CUANTOS DIAS TIENE EL MES SOLISITADO
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016

int main(){
	
	int D;
	 printf("Dime el numero del mes del cual quieres saber cuantos dias tiene:");
	 scanf("%d",&D);
	 
	 
	 if(D==1){
	 	printf("Enero tiene 31 dias");
	}
	 	 if(D==2){
	 	printf("Febrero tiene 29 dias");
	 }
	 	 if(D==3){
	 	printf("Marzo tiene 31 dias");
	 }
	 	 if(D==4){
	 	printf("Abril tiene 30 dias");
	 }
	 	 if(D==5){
	 	printf("Mayo tiene 31 dias");
	 }
	 	 if(D==6){
	 	printf("Junio tiene 30 dias");
	 }
	 	 if(D==7){
	 	printf("Julio tiene 31 dias");
	 }
	 	 if(D==8){
	 	printf("Agosto tiene 31 dias");
	 }
	 	 if(D==9){
	 	printf("Septiembre tiene 30 dias");
	 }
	 
	 	 if(D==10){
	 	printf("Octubre tiene 31 dias");
	 }
	 
	 	 if(D==11){
	 	printf("Noviembre tiene 30 dias");
	 }
	 
	 	 if(D==12){
	 	printf("Diciembre tiene 31 dias");
	 }
	 
	  if(D>12){
	 	printf("Ese mes no existe, cuenta a enero como 1 y diciembre como 12:");
}
}

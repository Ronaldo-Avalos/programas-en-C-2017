
#include <math.h>
#include <stdio.h>
//Objetivo:Dos soluciones de una ecuacion de segundo grado
//Autor:Ronaldo Avalos
//Fecha: 1-09-2016


int main()
{
printf("RESULVE ECUACION DE SEGUNDO GRADO\n\n");
 float a,b,c;
 float x1,x2;
 printf("dame el valor de a:\n"); 
 scanf("%f",&a);
 printf("dame el valor de b:\n");
 scanf("%f",&b);
 printf("dame el valor de c:\n");
 scanf("%f",&c);
 x1 = (-1*b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
 x2 = (-1*b+(sqrt(pow(b,2) -(4*a*c))))/(2*a);
 printf( "x1 es igual a: %f y x2 es igual a: %f",x1,x2);
 
}

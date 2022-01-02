//Objetivo:DAR TU MES Y DIA DE NACIMIENTO Y SABER TU SIGNO ZODIACAL
//Autor:Ronaldo Avalos
//Fecha: 5-10-2016

#include <stdio.h> 


int main(){
   int D,M;
    
    printf("                      TE DIRE QUE SIGNO ZODIACAL ERES\n\n");
     
    printf("Dime tu mes de nacimiento:");	 
	scanf("%d",&M);
	
    printf(" Y dia de nacimiento:");
	scanf("%d",&D);
    
    
    if((M==3&&D>=21)||(M==4&&D<=20))
	{printf("Tu signo zodiacal es: Aries"); }
    else
	  if((M==4&&D>=21)||(M==5&& D<=21)) 
      printf("Tu signo zodiacal es: Tauro"); 
      
      else 
	  if((M==5&&D>=5)||(M==6&&D<=21)) 
      printf("Tu signo zodiacal es: Gecminis");
      
      else 
	 if((M==6&&D>=21)||(M==7&&D<=23)) 
      printf("Tu signo zodiacal es: Cancer"); 
      
	  else
	  if((M==7&&D>=24)||(M==8&&D<=23)) 
      printf("Tu signo zodiacal es: Leo"); 
      
     else 
	 if((M==8&&D>=24)||(M==9 &&D<=23)) 
      printf("Tu signo zodiacal es: Virgo"); 
      
      else 
	 if((M==9&&D>=24)||(M==10 &&D<=23)) 
      printf("Tu signo zodiacal es: Libra"); 
      
	  else 
	  if((M==10&&D>=24)||(M==11&&D<=22)) 
      printf("Tu signo zodiacal es: Escorpio"); 
      
       else 
	  if((M==11&&D>=23)||(M==12&&D<=21))
      printf("Tu signo zodiacal es: Sagitario"); 
      
        else 
	  if((M==12&&D>=22)||(M==1&&D<=20)) 
      printf("Tu signo zodiacal es: Capricornio");
      
       else 
	   if((M==1&&D>=21)||(M==2&&D<=19)) 
      printf("Tu signo zodiacal es: Acuario"); 
      
	  else
	   if((M==2&&D>=20)||(M==3&&D<=20)) 
      printf("Tu signo zodiacal es; Picis"); 
 
}
	 
	 
	 


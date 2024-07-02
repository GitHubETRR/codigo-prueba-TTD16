//20.	Dada una cantidad entera de segundos (menor a 86400) y conviértela en horas, minutos y segundo utilizando los operadores de cociente y resto enteros. 

#include <stdio.h>
#include <math.h>

int main(){
   
   int segundos;
   int horas, minutos, segundos1;
   
   printf("Bienvenido al programa donde calculamos un tiempo con segundos \n");
   printf("Para comenzar ingrese la cantidad de segundos: ");
   scanf("%d", &segundos);
   
   if(segundos>86400){
       printf("Un valor mas chico porfavor: ");
       scanf("%d", &segundos);
   }

    horas= segundos/3600;
    minutos= (segundos%3600)/60;
    segundos1= (segundos%3600)%60;
    
    printf("El tiempo es de %d:%d:%d", horas, minutos, segundos1);
    
return 0;
}

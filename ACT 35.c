//Desarrollar un algoritmo que ingrese un número entero de cuatro dígitos e indique con un mensaje si es capicúa.

#include <stdio.h>

int main(){
    
    int n;
    printf("Bienvenido al programa donde decide si un numero de 4 digitos es capicua o no \n");
    printf("Para comenzar ingrese su numero de 4 digitos: ");
    scanf("%d", &n);
    
    if (n<1000 | n>9999){
        printf("Ingrese un numero de 4 digitos, por favor: ");
        scanf("%d",&n);
        if(n / 1000 == n % 10 && (n / 100) % 10 == (n % 100) / 10){
        printf("El numero es capicúa");
     }else{
       printf("El numero no es capicúa");
     }
        return 0;
    }
    else
        if(n / 1000 == n % 10 && (n / 100) % 10 == (n % 100) / 10){
       printf("El numero es capicúa");
    }else{
       printf("El numero no es capicúa");
   }
return 0;
}

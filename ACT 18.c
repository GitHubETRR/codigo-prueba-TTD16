//18.	Desarrollar un algoritmo que le permita leer un valor para el radio (R) y calcule el área (A) de un círculo y emitir su valor. 

#include <stdio.h>
#include <math.h>
float const PI = 3.14;

int main(){
    
    float radio;
    float area;
    
    printf("Bienvenido al programa donde ingresamos el radio y calculamos el area de un circulo \n");
    printf("Para comenzar ingrese el valor del radio: ");
    scanf("%f", &radio);
    
    area = PI*radio*radio;
    
    printf("El area del circulo es de %2.f", area);

}

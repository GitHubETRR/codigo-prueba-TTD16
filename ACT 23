//23.	Desarrollar un algoritmo que permita calcular el área de un triángulo en función de las longitudes de sus lados previamente leídos desde el teclado. 

#include <stdio.h>
#include <math.h>

int main(){
    
    float lado1, lado2, lado3;
    float area;
    float sp;
    
    printf("Bienvenido al programa donde calculamos el area de un triangulo con 3 de sus lados \n");
    printf("Para comenzar ingrese el valor de los 3 lados \n ");
    printf("Lado 1: ");
    scanf("%f",&lado1);
    printf("Lado 2: ");
    scanf("%f",&lado2);
    printf("lado 3: ");
    scanf("%f",&lado3);
    
    sp = (lado1 + lado2 + lado3)/2;
    area = sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3));
    
    printf("El area del triangulo es de %2.f", area);
return 0;
}

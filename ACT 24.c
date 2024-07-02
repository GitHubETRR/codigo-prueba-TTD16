//24.	Desarrollar un algoritmo que permita determinar el área y volumen de un cilindro cuyo radio (r) y altura (h) se leen desde teclado. 

#include <stdio.h>
#include <math.h>

float const PI= 3.14;

int main(){
    
    float radio, altura;
    float area, volumen;
    
    printf("Bienvenido al programa donde calculamos el area y volumen de un cilindro \n");
    printf("Para comenzar ingrese el radio y altura del cilindro \n");
    printf("Radio: ");
    scanf("%f",&radio);
    printf("altura: ");
    scanf("%f",&altura);
    
    area = 2*PI*radio*(radio +altura);
    volumen= PI*radio*radio*altura;
    
    printf("El area del cilindro es de %2.f", area);
    printf(" y el volumen de %2.f", volumen);
return 0;
}

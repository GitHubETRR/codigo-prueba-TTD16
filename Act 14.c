//Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo, y se emita por pantalla el valor del restante.  
#include <stdio.h>

int main(){
    
    float angulo1, angulo2;
    printf("Bienvenido al programa que calcula un angulo faltante de un triangulo \n");
    printf("Por favor ingrese sus 2 angulos del triangulo: ");
    scanf("%f", &angulo1);
    scanf("%f",&angulo2);
    
    float angulo3 = 180-angulo1-angulo2;
    
    printf("su angulo es de: %2.f°",angulo3);
}

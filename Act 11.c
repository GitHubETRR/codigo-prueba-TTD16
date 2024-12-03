//Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas. 
#include <stdio.h>

int main(){
    float centimetros;
    printf("bienvenido al programa conversor de centimetros a pies y pulgadas\n");
    printf("para comenzar ingrese su valor de centimetros:");
    scanf("&f",  &centimetros);
    
    int pies = (int) centimetros / 30.48;
    float pulgadas = (centimetros/2.54);
    
    printf("su valor en pies es de: %d \n",pies);
    printf("su valor en pulgadas es de: %f", pulgadas);
}

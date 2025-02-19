//Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas.

#include <stdio.h>

int main(){
    float centimetros, pies, pulgadas;
    int decision;
    
    printf("Bienvenido, ingrese la cantidad de centimetros que quiere convertir: \n");
    scanf("%f", &centimetros);
    printf("Perfecto, ahora oprima 0 si quiera convertirlos a pies o 1 si quiere convertirlos en pulgadas: \n");
    scanf("%d", &decision);
    
    pies = centimetros/30.48;
    pulgadas =centimetros/2.48;
    
    if(decision == 0){
        printf("Perfecto, aqui tiene su conversion: %f", pies);
    }else if(decision == 1){
        printf("Perceto, aqui tiene su conversion: %f", pulgadas);
    }else{
        printf("Error, eliga el 0 o el 1");
    }
}

//Construye un programa que dados el valor de 1 kg de determinada mercadería y la cantidad mercadería comprada, emite el valor del total a pagar.  

#include <stdio.h>

    int main(){
    
        float preciokg , total;
        int kg;
        printf("Bienvenido al programa donde calculamos el precio segun la cantidad de kilos \n");
        printf("Por favor ingrese el precio por kilo ");
        scanf("%f", &preciokg);
        printf("por favor ingrese cuantos kilos ");
        scanf("%d",&kg);
        
        total = kg*preciokg;
        printf("la cantidad a pagar es de %2.f", total);
}

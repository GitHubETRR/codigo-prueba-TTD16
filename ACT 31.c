//Desarrollar un algoritmo que ingrese por consola dos números enteros, a continuación, indique si son iguales o distintos.

#include <stdio.h>

int main(){
    
    int n, n2;
    printf("Bienvenido al programa que compara 2 numeros y dice si son iguales o no \n");
    printf("Para comenzar ingrese sus 2 numeros: \n");
    scanf("%d",&n);
    scanf("%d",&n2);
    
    if(n==n2){
        printf("Son iguales");
    }
    else
        printf("No son iguales");
return 0;
}

//47.	Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo, se pide mostrar por pantalla el promedio

#include <stdio.h>

int main(){

    int n, t, c;
    float p;
    printf("ingrese un numero positivo porfavor, si quiere hacer el promedio, presione '0': ");
    scanf("%d", &n);
    while(n>0){
        c++;
        t += n;
        printf("ingrese otro valor valor positivo porfavor: ");
        scanf("%d", &n);
    }
    p = t/c;
    printf("el promedio de todos los numeros ingresados es %f", p);
    return 0;
    
}

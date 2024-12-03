//	Desarrollar un algoritmo que ingrese números hasta leer un cero, calcular y mostrar por pantalla cuántos de ellos son negativos y cuántos son positivos.

#include <stdio.h>

int main(){
    int n, p, ne;
    printf("ingrese un valor positivo o negativo, si es cero, el codigo terminara: ");
    scanf("%d", &n);
    while(n!=0){
        if(n>0){
            p++;
        } else ne++;
        printf("ingrese otro valor: ");
        scanf("%d", &n);
    }
    printf("usted a ingresado %d valores positivos y %d negativos", p, ne);
    return 0;

}

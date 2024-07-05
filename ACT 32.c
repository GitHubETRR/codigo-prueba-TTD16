//Desarrollar un algoritmo que ingrese un numero por teclado y luego indique si es par o impar.

#include <stdio.h>
#include <stdio.h>

int main(){
    
    int n;
    float n2;
    printf("Bienvenido al programa que dice si el numero que ingresas es par o impar \n");
    printf("Para comenzar ingrese el numero: ");
    scanf("%d",&n);
    
    n2= n%2;
    
    if(n2==1){
        printf("Es inpar");
    }else
        printf("Es par");
}

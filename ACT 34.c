//34.	Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números es par.

#include <stdio.h>
#include <math.h>

int main(){
    
    int n1, n2, n3;
    printf("Bienvenido al programa que dice si la suma de 2 numeros es par o inmpar \n");
    printf("Para comenzar ingrese sus 2 numeros: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    n3= (n1+n2)%2;
    
    if (n3==1){
        printf("El numero es impar");
    }
    else
        printf("El numero es par");
}

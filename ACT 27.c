//Dado un número entero de tres cifras mostrar sus cifras por separado.

#include <stdio.h>
#include <math.h>

int main(){
    
    int n, c1, c2, c3;
    printf("Bienvenido al programa que al ingresar un numero de 3 cifras las separa \n");
    printf("Para comenzar ingrese su numero de 3 cifras positivo: ");
    scanf("%d",&n);
    
    c1 = n / 100;
    c2 = (n % 100) / 10;
    c3 = n % 10;
    
    if(n<=99 | n>=1000){
        printf("Por favor, ingrese un valor de 3 cifras positivo: ");
        scanf("%d",&n);
        
        c1 = n / 100;
        c2 = (n % 100) / 10;
        c3 = n % 10;
        
        printf("Sus 3 cifras son: %d %d %d", c1, c2, c3);
    return 0;
}
    printf("Sus 3 cifras son: %d %d %d", c1, c2, c3);
return 0;
}

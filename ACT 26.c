//Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra.

#include <stdio.h>
#include <math.h>

int main(){
    
    int n, f;
    printf("Bienvenido al programa que adivina la ultima cifra del numero que usted ingresa \n");
    printf("Para comenzar ingrese un numero de 2 cifras o mas y que sea positivo: ");
    scanf("%d",&n);
    
    f= n % 10;
    
    if(n<=9){
        printf("Ingrese otro valor de 2 cifras y positivo por favor: ");
        scanf("%d",&n);
        f=n%10;
        printf("Su ultima cifra es de %d", f);
    }else{
        printf("Su ultima cifra es de %d",f);
    }
return 0;
}

//Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) y muestre por pantalla la tabla de multiplicar del número ingresado.

#include <stdio.h>

int main(){
    int n, i;
    printf("Bienvenido al programa que muestra la tabla de multiplicar de un numero hasta el 10\n");
    printf("Para comenzar ingrese el numero del que quiere ver la tabla: ");
    scanf("%d", &n);
    
      if (n > 10 || n < 0){
       printf("Valor invalido");
   }else{
       for (i=0; i<11; i++){
          printf("%d x %d = %d\n", n, i, n*i);
   }
   }
}

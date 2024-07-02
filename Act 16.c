//Construye un programa que permita ingresar la superficie de un cuadrado (en m2), el mismo debe emitir por pantalla su perímetro.  
#include <stdio.h>
#include <math.h>

int main(){
    
   int superficie;
   printf("Bienvenido al programa donde calculamos el perimetro segun la superficie\n");
   printf("Para comenzar ingrese el valor de la superficie: ");
   scanf("%d",&superficie);
   
   int perimetro = 4* sqrt(superficie);
   
   printf("El perimetro es de: %d", perimetro);
}

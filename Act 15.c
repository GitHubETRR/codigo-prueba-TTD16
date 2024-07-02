//Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y su perímetro.  
#include <stdio.h>

int main(){
    
    int base, altura;
    printf("bienvenido al programa donde calculamos la superficie y el perimetro de un rectangulo con las medidas de sus lados \n");
    printf("para empezar ingrese la altura y base del rectangulo: ");
    scanf("%d",&base);
    scanf("%d",&altura);
    
    int superficie = base*altura;
    int perimetro = 2*(base+altura);
    
    printf("La superficie del rectangulo es de: %d", superficie);
    printf("\nEl perimetro del rectangulo es de: %d", perimetro);
}

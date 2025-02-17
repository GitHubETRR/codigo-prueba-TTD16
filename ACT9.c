//Desarrolla un algoritmo que permita leer 2 valores y emitir por pantalla la suma de los dos, la resta, producto, división, promedio y el doble producto del primero menos la mitad del segundo. 

#include <stdio.h>

int main(){
    int a, b, suma, resta, producto, doble_producto, mitad_segundo, resultado;
    float division, promedio;
    
    printf("Ingrese dos valores enteros: \n");
    scanf("%d %d", &a, &b);
    
    printf("Usted ingreso el %d y el %d\n", a, b);
    
    suma= a+b;
    resta= a-b;
    producto= a*b;
    division= a/b;
    promedio= (a+b)/2;
    doble_producto= a*a;
    mitad_segundo= b-(b/2);
    resultado= doble_producto - mitad_segundo;
    
    
    printf("La suma de esos valores es %d\n", suma);
    printf("La resta de esos valores es %d\n", resta);
    printf("El producto de esos valores es %d\n", producto);
    printf("La division de esos valores es de %f\n", division);
    printf("El promedio de esos valores es de %f\n", promedio);
    printf("La resta entre el doble producto y la mitad del segundo es de %d", resultado);
}

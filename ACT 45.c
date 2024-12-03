//Desarrollar un algoritmo que ingrese 10 números enteros y muestre por pantalla un mensaje únicamente cuando son positivos.

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d, e, f, g, h, i, j, t, t2;
    printf("Bienvenido al programa que imprime un mensaje si sus 10 numeros son positivos \n");
    printf("Para comenzar ingrese 10 números: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    
    t= a*b*c*d*e*f*g*h*i*j;
    t2=t-(-t);
    
    if(t2==0){
        printf("Sus 10 numeros son positivos");
    }else{
        printf("Sus 10 numeros no son positivos");
    }
}

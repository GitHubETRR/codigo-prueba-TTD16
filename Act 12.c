//Construye un programa que pregunte los años que tienes y emita como respuesta el número de días vividos.  #include <stdio.h>

#include <stdio.h>

    int main(){
        
        int edad;
        printf("bienvenido al programa donde te preguntamos la edad y te decimos cuandos dias viviste\n");
        printf("por favor ingrese su edad: ");
        scanf("%d",&edad);
        
        int dias = edad*365;
        
        printf("a vivido %d dias", dias);
    }

//Desarrollar un algoritmo que ingrese tres caracteres y mostrarlos ordenados según el orden ascendente del alfabeto. 

#include <stdio.h>
#include <math.h>

int main(){
    
    char c, c1, c2;
    printf("Bienvenido al programa que ordena 3 caracteres segun el orden alfabetico ascendente \n");
    printf("Para comenzar ingrese los 3 caracteres: ");
    scanf("%c %c %c", &c, &c1, &c2);
    
    if (c>1){
        if (c1>2)
            printf("Los caracteres son: %c, %c, %c \n",c2,c1,c);
        else if (c>c2)
            printf("Los caracteres son: %c, %c, %c \n",c1,c2,c);
        else
            printf("Los caracteres son: %c, %c, %c \n",c1,c,c2);
    }else{   
        if (c>c2)
            printf("Los caracteres son: %c, %c, %c \n",c2,c,c1);
        else if (c1>c2)
            printf("Los caracteres son: %c, %c, %c \n",c,c2,c1);
        else
            printf("Los caracteres son: %c, %c, %c \n",c,c1,c2);
    }
    return 0;
}

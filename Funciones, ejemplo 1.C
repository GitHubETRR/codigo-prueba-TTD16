//Funciones, ejemplo 1

/*En el prototipo (al declarar la función) puede o no estar el nombre de las variables, si es importante que figure en donde está el código de la función*/

#include <stdio.h>

void Funcion (unsigned int); //Prototipo de la Funcion

int main(void){
    
    unsigned int var2;
    Funcion(2);
    printf("Hola mundo");
    return 0;
    
}

void Funcion (unsigned int var){
    /*mi codigo*/
}


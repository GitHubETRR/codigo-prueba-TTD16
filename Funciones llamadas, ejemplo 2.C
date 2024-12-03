//Funciones llamadas, ejemplo 2 

/*En este ejemplo hay 3 variables var1 (global) y 2 variables var2, una local en la función principal main y otra en la función mifunc, las variables en main y en mifunc no están relacionadas y sus contenidos pueden o no ser iguales */

#include <stdio.h>

unsigned int var1;

void funcion (void);

int main (void){
    unsigned int var2;
    
    printf("Hola mundo");
    return 0;
    
}

void funcion (void){
    unsigned int var2;
    /*mi codigo*/
}

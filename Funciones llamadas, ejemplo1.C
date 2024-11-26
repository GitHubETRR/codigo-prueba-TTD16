//Funciones llamadas, ejemplo 1

/*En este ejemplo tenemos una variable global llamada var1 que puede ser consultada en todas las funciones que agreguemos al programa, y otra variable var2 que solo existe en el ámbito de la función principal (main) */

#include <stdio.h>

unsigned int var1;

int main(void){
    unsigned int var2;
    
    printf("Hola mundo");
    return 0;
}

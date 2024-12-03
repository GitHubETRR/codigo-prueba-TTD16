//Funciones, ejemplo 2

/*Si la función se escribe con su código arriba de la función en donde se la invoqué no es necesario declarar su prototipo, aunque no es una buena práctica. En los archivos de bibliotecas que incluimos se encuentran los prototipos de muchas funciones que podemos utilizar*/


#include <stdio.h>

void Funcion (unsigned int var){
    /*mi codigo*/
}

int main(void){
    unsigned int var2;  
    Funcion(2);
    printf("Hola mundo");
    return 0;
    
}

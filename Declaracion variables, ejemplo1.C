//Declaracion variables, ej 1

#include <stdio.h>

unsigned int suma(unsigned int var1, unsigned int var2);

int main (void){
    
    unsigned int suma=0, resultado;
    resultado=suma (1,2);
    return 0;

}
unsigned int suma(unsigned int var1, unsigned int var2){
    unsigned int res=0;
    res=var1+var2;
    return(res);
}

/*En el ejemplo anterior se llama a la función suma pasándole los valor 1 y 2,  y la función retorna el valor de la suma*/

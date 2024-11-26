//Declaracion variables, ejemplo 2 con constante

#include <stdio.h>

float areacircuferencia (unsigned int radio);
const float PI=3.14;

int main(void){
    float area=0;
    area= areacircuferencia(1);
    return 0;
}
float areacircuferencia (unsigned int radio){
    return(PI*radio*radio);
}

#include <stdio.h>

int main(){
    short int a=30000; //no puede superar los 35000
    short int b=36000; //supero los 36000
    printf("a vale %d \n", a);
    printf("b vale %d", b);
    //el short int tiene un rango de -32,768 a 32,767, es decir, si supera los 32,767, va a retomar desde los -32,768
    
}

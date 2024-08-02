//Una compañía dedicada a servicio de mensajería realiza envios al interior el costo fijo de traslado es de $1500 si es corta distancia y 2000 si es larga distancia, luego dependerá del peso de la mercadería enviada, los de corta distancia si el peso supera los 20 kilos se le cobran $800 por cada kilo de exceso y los de larga distancia se le cobra $800, cada 5 kilos excedidos. Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el costo del viaje.

#include <stdio.h>

int main(){
    
    int tpv, p, exceso, exceso1;
    printf("Bienvenido al programa en el que calcula el costo del viaje segun el tipo de viaje y la cantidad de peso que lleva \n");
    printf("Para comenzar ingrese su tipo de viaje, ingrese 1 si es de corta distancia o 0 si es de larga distancia: ");
    scanf("%d",&tpv);
    
    if(tpv==1){
        printf("Su viaje es de larga distancia \n");
        printf("Ingrese cuanto peso lleva: ");
        scanf("%d",&p);
        if(p<20){
            printf("Debe pagar $2000");
        }else{
            exceso = (p-20)*160+2000;
            printf("Debe pagar $%d",exceso );
        }
    }else{
        printf("Su viaje es de corta distancia \n");
        printf("Ingrese cuanto peso lleva: ");
        scanf("%d", &p);
        if(p<20){
            printf("Debe pagar $1500");
        }else{
            exceso1 = (p-20)*800+1500;
            printf("Debe pagar $%d", exceso1);
        }
    }
    return 0;
}

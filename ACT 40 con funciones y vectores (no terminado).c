//40.	Desarrollar un algoritmo que ingrese fecha de nacimiento como tres enteros (DD, MM, AAAA), de una persona y mostrar por pantalla su fecha de nacimiento, de la siguiente forma "La persona nació el 5 de marzo de 1973".

#include <stdio.h>

void bienvenida(void);
int obtener_dia(void);
int obtener_mes(void);
int obtener_año(void);
void mostrar_fecha(int dia, int mes, int año);

int main(){
    int dia, mes, año;
    
    bienvenida();
    
    dia = obtener_dia();
    mes = obtener_mes();
    año = obtener_año();
    
    mostrar_fecha(dia, mes, año);
    
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa que muestra su fecha de nacimiento completa.\n");
}

int obtener_dia(void) {
    int dia;
    do {
        printf("Ingrese el día de su nacimiento (1-31): ");
        scanf("%d", &dia);
    } while (dia < 1 || dia > 31);
    return dia;
}

int obtener_mes(void) {
    int mes;
    do {
        printf("Ingrese el mes de su nacimiento (1-12): ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);
    return mes;
}

int obtener_año(void) {
    int año;
    printf("Ingrese el año de su nacimiento: ");
    scanf("%d", &año);
    return año;
}

void mostrar_fecha(int dia, int mes, int año) {
    const char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
    printf("La persona nació el %d de %s de %d.\n", dia, meses[mes-1], año);
}

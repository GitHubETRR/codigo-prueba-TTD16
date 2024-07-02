//25.	Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año trabajado. El sueldo básico es de $4500. Se desea ingresar la cantidad de horas trabajadas, la antigüedad y obtener el sueldo neto.

#include <stdio.h>
#include <math.h>

int main(){
    
    int horas, años;
    int sn;
    int sueldo=4500;
    printf("Bienvenido al programa donde calculamos su sueldo neto segun sus horas trabajadas y años de experiencia \n");
    printf("Para comenzar ingrese cuantas horas trabajo: ");
    scanf("%d", &horas);
    printf("Ahora ingrese cuantos años lleva trabajando: ");
    scanf("%d", &años);
    
    sn= (sueldo*horas)+(años*2)*(sueldo/100);
    
    printf("Su sueldo neto es de %d", sn);
return 0;
}

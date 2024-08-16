//Desarrollar un algoritmo que ingrese nota entera (entre 1 y 10) de un alumno correspondiente al promedio obtenido, se pide mostrar el siguiente mensaje: "El alumno obtuvo un sobresaliente", según el promedio: 10-Sobresaliente, 8 y 9-Distinguido, 6 y 7-Bueno, 4 y 5-Aprobado, 1,2,3-Reprobado.

#include <stdio.h>

int main(){
    int n;
    printf("Bienvenido al programa que determina como le fue segun la nota que obtuvo \n");
    printf("Para comenzar ingrese la nota que obtuvo: \n");
    scanf("%d",&n);
    
    if(n==10){
        printf("Usted obtuvo un Sobresaliente");
    }else if(n==9 || n==8){
        printf("Usted obtuvo un Distinguido");
    }else if(n==7 || n==6){
        printf("Usted obtuvo un Bueno");
    }else if(n== 5 || n==4){
        printf("Usted obtuvo un Aprobado");
    }else if(n== 3 || n==2 || n==1){
        printf("Usted obtuvo un Reprobado");
    }else{
        printf("Su nota tiene que estar entre 1-10, reinicie el programa y ponga una nota de ese rango");
    }
    return 0;
}

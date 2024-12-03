//Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una operación (S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación correspondiente, tener en cuenta que no se pueden realizar divisiones por cero. 

#include <stdio.h>
#include <math.h>

int main(){
    char c;
    float n, n1, r;
    printf("Bienvenido al programa que simula ser una calculadora \n");
    printf("Para comenzar, tendra que ingresar una de los siguientes caracteres para comenzar una operacion especifica \n");
    printf("S(Suma), R(Resta), M(Multiplicacion), D(Division): \n");
    scanf("%c",&c);
    
    if (c == 'S' || c == 's'){
        printf("Genial, usted a elegido la suma, ahora ingrese sus 2 numeros a sumar: \n");
        scanf("%f %f",&n,&n1);
        r= n+n1;
        printf("Su resultado de la operacion es de %f",r);
    } else if (c == 'R' || c == 'r') {
        printf("Genial, usted a elegido la resta, ahora ingrese su numero a restar y cuanto le quiere restar: \n");
        scanf("%f %f",&n,&n1);
        r=n-n1;
        printf("Su resultado de la operacion es de %f",r);
    } else if (c == 'M' || c == 'm') {
        printf("Genial, usted a elegido la Multiplicacion, ahora ingrese sus 2 numeros a multiplicar: \n");
        scanf("%f %f", &n, &n1);
        r=n*n1;
        printf("Su resultado de la operacion es de %f",r);
    } else if (c == 'D' || c == 'd') {
        printf("Genial, usted a elegido la division, ahora ingrese su dividendo y divisor: \n");
        scanf("%f %f",&n, &n1);
        r=n/n1;
        if (n1!=0){
            printf("Su resultado de la operacion es de %f",r);
        } else {
            do{
                printf("No se puede dividir por 0, por favor ingrese otro valor: \n");
                scanf("%f",&n1);
            }while(n1==0);
            r=n/n1;
            printf("Su resultado de la operacion es de %f",r);
            return 0;
        }
    }else{
            printf("Error, su caracter no cumple con los requisitos, reinicie el programa e ingrese un caracter que cumpla los requisitos");
        }
    return 0;
}

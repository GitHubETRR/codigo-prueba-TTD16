#include <stdio.h>

void bienvenida(void);
int pedirdato(void);
int sumar(int,int);
void mostrar(int);

int main(){
    int num1, num2, resultado;
    bienvenida();
    num1=pedirdato();
    num2=pedirdato();
    resultado=sumar(num1,num2);
    mostrar(resultado);
    return 0;
}

void bienvenida(void){
    printf("Hola bienvenido \n");
}

int pedirdato(void){
    int dato;
    printf("Ingrese un valor: ");
    do{
        scanf("%d",&dato);
        if(dato<0){
            printf("Por favor vuelva a ingresar un valor positivo ");
        }    
    }while(dato<0);  
    return dato;

}
int sumar(int op1,int op2){
    int res;
    res=op1+op2;
    return res;
}
void mostrar(int valor){
    printf("el valor del resultado es de: %d", valor);
}

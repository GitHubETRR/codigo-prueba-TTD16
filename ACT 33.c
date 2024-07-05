//33.	Desarrollar un algoritmo que Ingrese tres números e indique cuál es el menor, si los tres son iguales indicarlo con un mensaje.

#include <stdio.h>

int main(){
    
    int n1, n2, n3;
    printf("Bienvenido al programa que compara 3 numeros y te dice cual es menor \n");
    printf("Para comenzar ingrese sus 3 numeros: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if(n1<n2 && n1<n3){
        printf("El numero menor es %d",n1);
    }
    else if(n2< n1 && n2<n3){
        printf("El numero menor es %d",n2);
    }
    else if(n3< n2 && n3<n1){
        printf("El numero menor es %d",n3);
    }
    else if(n1<n2 && n1==n3){
        printf("Hay 2 numeros iguales");
    } 
    else if(n1==n2 && n1<n3){
        printf("Hay 2 numeros iguales");
    }
    else if(n2<n1 && n2==n3){
        printf("Hay 2 numeros iguales");
    }
    else if(n2==n1 && n2<n3){
        printf("Hay 2 numeros iguales");
    }
    else if(n3<n2 && n3==n1){
        printf("Hay 2 numeros iguales");
    }
    else if(n3==n2 && n3<n1){
        printf("Hay 2 numeros iguales");
    }
    else
        printf("Hay 3 numeros iguales");
}

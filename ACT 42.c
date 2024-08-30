//Construir un programa que ingrese un carácter y determine si es una vocal.

#include <stdio.h>

int main(){
    char l;
    printf("Bienvenido al programa que confirma si su carácter es una vocal \n");
    printf("Para comenzar tiene que ingresar su cáracter: ");
    scanf("%c", &l);
    
    if (l=='A' || l=='a'){
        printf("Su cáracter es una vocal");
    }else if (l=='E' || l=='e'){
        printf("Su cáracter es una vocal");
    }else if (l=='I' || l=='i'){
        printf("Su cáracter es una vocal");
    }else if (l=='O' || l=='o'){
        printf("Su cáracter es una vocal");
    }else if (l=='U' || l=='u'){
        printf("Su cáracter es una vocal");
    }else{
        printf("Su caracter no es una vocal, ingrese otro: ");
    }
}

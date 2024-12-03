//Estructura personaje

#include <stdio.h>
#define MAX_CHAR 15
#define MAX_DANO 3
#define MAX_PODERES 3

struct Personaje {
    char nombre[MAX_CHAR];
    float danos[MAX_DANO];
    int vida;
    int poderes[MAX_PODERES];
};

typedef struct Personaje personaje;

int main() {
    personaje p1;
    char sc;
    
    printf("Ingrese el nombre de su personaje: ");
    scanf("%s", p1.nombre); 
    

    printf("Ingrese el porcentaje de daño de sus 3 ataques \033[31;1m(No ingrese comas si es decimal)\033[0m: \n");
    scanf("%f %f %f", &p1.danos[0], &p1.danos[1], &p1.danos[2]);

    printf("Ingrese la vida del personaje: ");
    scanf("%d", &p1.vida);

    printf("Ingrese el porcentaje de multiplicador de daño: ");
    scanf("%d", &p1.poderes[0]);
    
    printf("Ingrese el porcentaje de evasión: ");
    scanf("%d", &p1.poderes[1]);
    
    printf("Ingrese el porcentaje de bloqueo: ");
    scanf("%d", &p1.poderes[2]);

    printf("\n\033[32;1mDetalles del Personaje:\033[0m\n");
    printf("\033[32;1mNombre:\033[0m %s\n", p1.nombre);
    printf("\033[32;1mPorcentaje de daño:\033[0m %lf, %lf, %lf\n", p1.danos[0], p1.danos[1], p1.danos[2]);
    printf("\033[32;1mVida:\033[0m %d HP\n", p1.vida);
    printf("\033[32;1mPorcentaje de Poderes/Evasion/Bloqueo:\033[0m %d, %d, %d\n", p1.poderes[0], p1.poderes[1], p1.poderes[2]);

    return 0;
}

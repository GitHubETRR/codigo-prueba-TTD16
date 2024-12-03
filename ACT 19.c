//19.	Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. Desarrollar los correspondientes algoritmos. 

#include <stdio.h>
#include <math.h>

int main(){
    
    float ca, co;
    float h;
    
    printf("Bienvenido al programa donde calculamos la hipotenusa con 2 catetos \n");
    printf("Para comenzar ingrese los valores de los 2 catetos\n ");
    printf("Cateto adyacente: ");
    scanf("%f",&ca);
    printf("Cateto opuesto: ");
    scanf("%f",&co);
    
    h=sqrt(ca*ca+co*co);
    
    printf("La hipotenusa es de%2.f", h);
return 0;
}

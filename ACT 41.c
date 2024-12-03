//Desarrolle un algoritmo que ingrese los valores de los lados de un triángulo. Valide si las medidas pueden formar un triángulo y luego indique a través de un mensaje que tipo de triángulo es (EQUILÁTERO, ISÓSCELES, O ESCALENO).

#include <stdio.h>

int main(){
    int l, l1, l2;
    printf("Bienvenido al programa que dice si un triángulo es EQUILÁTERO, ISÓSCELES o ESCALENO \n");
    printf("Para comenzar ingrese los 3 lados de su triángulo \n");
    printf("Lado 1: ");
    scanf("%d", &l);
    printf("Lado 2: ");
    scanf("%d", &l1);
    printf("Lado 3: ");
    scanf("%d", &l2);
    
    if (l + l1 > l2 && l + l2 > l1 && l1 + l2 > l) {
      if (l == l1 && l1 == l2) {
           printf("El triángulo es equilátero.\n");
        }
      else if (l == l1 || l == l2 || l1 == l2) {
           printf("El triángulo es isósceles.\n");
        }
      else {
            printf("El triángulo es escaleno.\n");
        }
   }else {
        printf("Es imposible formar un triángulo con esas medidas\n");
    }

   return 0;

}

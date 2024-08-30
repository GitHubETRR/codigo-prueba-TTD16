//Desarrollar un algoritmo que escriba por pantalla los primeros 100 números naturales.

#include <stdio.h>
#include <math.h>

int main() {
   int i;
   printf("Bienvenido al programa que imprime del 1 al 100 \n");
   printf("Para comenzar apriete cualquier tecla: ");
   scanf("%d", &i);
   
   while(i<100){
    i++;
    printf("%d\n",i);
   }
   return 0;
}

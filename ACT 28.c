//Realizar un programa que devuelva la raíces de un polinomio de 2do grado ingresado los coeficientes a,b y c.

#include <stdio.h>
#include <math.h>

int main(){
    
    int a,b,c;
    float r1,r2;
    printf("Bienvenido al programa que calcula las raices de un polinomio de grado 2 \n");
    printf("Para comenzar tendremos en cuenta 3 cosas, el coeficiente principal, el coeficiente de grado 1 y el termino independiente \n");
    printf("Ingrese el valor del coeficiente principal: ");
    scanf("%d",&a);
    printf("Ahora el valor del coeficiente de grado 1: ");
    scanf("%d", &b);
    printf("Ahora ingrese el valor del termino independiente: ");
    scanf("%d", &c);
    
    r1= (-b+sqrt(b*b-4*a*c))/(2*a);
    r2= (-b-sqrt(b*b-4*a*c))/(2*a);
    
    printf("Sus raices son: %2.f %2.f ", r1, r2);  //Si el programa devuelve -nan -nan, significa que las raices son imaginarias
return 0;
}

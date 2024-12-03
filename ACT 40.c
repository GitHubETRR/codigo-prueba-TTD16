//Desarrollar un algoritmo que ingrese fecha de nacimiento como tres enteros (DD, MM, AAAA), de una persona y mostrar por pantalla su fecha de nacimiento, de la siguiente forma "La persona nació el 5 de marzo de 1973".

#include <stdio.h>
#include <math.h>

void bienvenida (void);

int main(){
    int d, m, a;
    bienvenida();
    printf("Para comenzar ingrese su fecha de nacimiento, su mes y su año \n");
    printf("Su fecha de nacimiento: \n");
    scanf("%d", &d);
    printf("Su mes: \n");
    scanf("%d", &m);
    printf("Su año: \n");
    scanf("%d", &a);
    
    if(d>0 && d<32){
        if(m==1){
            printf("Su fecha de nacimiento es el %d de Enero de %d", d, a);
        }else if(m==2 || m==02){
            printf("Su fecha de nacimiento es el %d de Febrero de %d", d, a);
        }else if(m==3 || m==03){
            printf("Su fecha de nacimiento es el %d de Marzo de %d", d, a);
        }else if(m==4 || m==04){
            printf("Su fecha de nacimiento es el %d de Abril de %d", d, a);
        }else if(m==5 || m==05){
            printf("Su fecha de nacimiento es el %d de Mayo de %d", d, a);
        }else if(m==6 || m==06){
            printf("Su fecha de nacimiento es el %d de Junio de %d", d, a);
        }else if(m==7 || m==07){
            printf("Su fecha de nacimiento es el %d de Julio de %d", d, a);
        }else if(m==8){
            printf("Su fecha de nacimiento es el %d de Agosto de %d", d, a);
        }else if(m==9){
            printf("Su fecha de nacimiento es el %d de Septiembre de %d", d, a);
        }else if(m==10){
            printf("Su fecha de nacimiento es el %d de Octubre de %d", d, a);
        }else if(m==11){
            printf("Su fecha de nacimiento es el %d de Noviembre de %d", d, a);
        }else if(m==12){
            printf("Su fecha de nacimiento es el %d de Diciembre de %d", d, a);
        }else{
            do{
            printf("Ingrese un numero de mes que exista: \n");
            scanf("%d", &m);
            }while(m>12 || m<1);
            
            if(m==1 || m==01){
                printf("Su fecha de nacimiento es el %d de Enero de %d", d, a);
            }else if(m==2 || m==02){
                printf("Su fecha de nacimiento es el %d de Febrero de %d", d, a);
            }else if(m==3 || m==03){
                printf("Su fecha de nacimiento es el %d de Marzo de %d", d, a);
            }else if(m==4 || m==04){
                printf("Su fecha de nacimiento es el %d de Abril de %d", d, a);
            }else if(m==5 || m==05){
                printf("Su fecha de nacimiento es el %d de Mayo de %d", d, a);
            }else if(m==6 || m==06){
                printf("Su fecha de nacimiento es el %d de Junio de %d", d, a);
            }else if(m==7 || m==07){
                printf("Su fecha de nacimiento es el %d de Julio de %d", d, a);
            }else if(m==8){
                printf("Su fecha de nacimiento es el %d de Agosto de %d", d, a);
            }else if(m==9){
                printf("Su fecha de nacimiento es el %d de Septiembre de %d", d, a);
            }else if(m==10){
                printf("Su fecha de nacimiento es el %d de Octubre de %d", d, a);
            }else if(m==11){
                printf("Su fecha de nacimiento es el %d de Noviembre de %d", d, a);
            }else if(m==12){
                printf("Su fecha de nacimiento es el %d de Diciembre de %d", d, a);
            }
        }     
    }else{
        do{
        printf("Ingrese un numero de fecha que exista: \n");
        scanf("%d", &d);
        }while(d<=0 || d>=32);
        
        if(m==1){
            printf("Su fecha de nacimiento es el %d de Enero de %d", d, a);
        }else if(m==2 || m==02){
            printf("Su fecha de nacimiento es el %d de Febrero de %d", d, a);
        }else if(m==3 || m==03){
            printf("Su fecha de nacimiento es el %d de Marzo de %d", d, a);
        }else if(m==4 || m==04){
            printf("Su fecha de nacimiento es el %d de Abril de %d", d, a);
        }else if(m==5 || m==05){
            printf("Su fecha de nacimiento es el %d de Mayo de %d", d, a);
        }else if(m==6 || m==06){
            printf("Su fecha de nacimiento es el %d de Junio de %d", d, a);
        }else if(m==7 || m==07){
            printf("Su fecha de nacimiento es el %d de Julio de %d", d, a);
        }else if(m==8){
            printf("Su fecha de nacimiento es el %d de Agosto de %d", d, a);
        }else if(m==9){
            printf("Su fecha de nacimiento es el %d de Septiembre de %d", d, a);
        }else if(m==10){
            printf("Su fecha de nacimiento es el %d de Octubre de %d", d, a);
        }else if(m==11){
            printf("Su fecha de nacimiento es el %d de Noviembre de %d", d, a);
        }else if(m==12){
            printf("Su fecha de nacimiento es el %d de Diciembre de %d", d, a);
        }
    }
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa que dice su fecha de nacimiento completo \n");
}

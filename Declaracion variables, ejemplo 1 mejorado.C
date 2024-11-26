//Declaracion variables, ejemplo 1 mejorado

unsigned int suma (unsigned int var1, unsigned int var2);

int main(void){
    unsigned int suma=0, resultado;
    resultado=suma(1,2);
    return 0;
    
}
unsigned int suma (unsigned int var1, unsigned int var2){
    return (var1+var2);     //Cambiamos esto
}


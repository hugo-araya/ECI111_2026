#include <stdio.h>
// Leer desde teclado una serie de números y calcular su promedio. 
// El ingreso finaliza cuando se digite el numero -999.

int main(){
    int numero, suma, contador;
    float promedio;
    suma = 0;
    contador = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while (numero != -999){
        suma = suma + numero;
        contador = contador + 1;
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
    }
    if (contador == 0){
        printf("No se ingresaron numeros\n");
    }
    else{
        promedio = (float)suma / contador;
        printf("Promedio es: %f\n", promedio);
    }
    return 0;
}
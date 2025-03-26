#include <stdio.h>

void cuadradoNumero(int num);

int main(){
    int num;

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    cuadradoNumero(num);

    
    return 0;
}

void cuadradoNumero(int num){
    int cuadrado = num * num;
    printf("El cuadrado de %d es %d.\n", num, cuadrado);6
}
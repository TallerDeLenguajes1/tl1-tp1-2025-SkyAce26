#include <stdio.h>

int cuadradoNumero(int num);

int main(){
    int num, cuadrado;

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    cuadrado = cuadradoNumero(num);

    printf("El cuadrado de %d es %d.\n", num, cuadrado);
    
    return 0;
}

int cuadradoNumero(int num){
    return num * num;
}
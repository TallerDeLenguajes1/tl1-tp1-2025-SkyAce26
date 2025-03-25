#include <stdio.h>

int main(){
    //printf("Hola mundo.\n");
    int num = 4;
    int *punt;

    punt = &num;

    printf("El contenido del puntero es: %d.\n", *punt);
    printf("La direccion de memoria almacenada por el puntero es: %p.\n", punt);
    printf("La direccion de memoria de la variable es: %p\n", &num);
    printf("La direccion de memoria del puntero es: %p\n", &punt);
    printf("El tamaño de memoria utilizado por la variable num usando la funcion sizeof() es: %zu bytes.\n", sizeof(num));
    return 0;
}
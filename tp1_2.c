#include <stdio.h>

void cuadradoNumero(int num);
void invertir(int a, int b);
void orden(int a, int b);

int main(){
    int num, a, b;

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    cuadradoNumero(num);

    printf("El contenido de la variable num es: %d\n", num);
    printf("La dirección de memoria de la variable num es: %p\n", &num);

    printf("Ingresa dos numeros:\n");
    scanf("%d %d", &a, &b);

    invertir(a,b);
    orden(a,b);
    
    
    return 0;
}

void cuadradoNumero(int num){
    int cuadrado = num * num;
    printf("El cuadrado de %d es %d.\n", num, cuadrado);
}

void invertir(int a, int b){
    int aux = a;
    a = b;
    b = aux;

    printf("a = %d y b = %d\n", a,b);
}

void orden(int a, int b){
    int mayor, menor;
    if(a>b){
        mayor = a;
        menor = b;
    }else{
        if(b>a){
            mayor = b;
            menor = a;
        }else{
            printf("Los números son iguales.\n");
            return;
        }
    }

    printf("El número mayor es %d y el número menor es %d.\n", mayor, menor);
}
#include <stdio.h>
int main(void){
    int a;

    printf("Ingrese un número positivo:");
    scanf("%i", &a);

    if (a < 0)
        printf("El número es negativo y no es valido.");
    else{
        if(a <=20){
            printf("Zona 1.");
        }
        else{
            if(a <= 40){
                printf("Zona 2.");
            }
            else
                printf("Zona 3.");
        }
    }
    
}
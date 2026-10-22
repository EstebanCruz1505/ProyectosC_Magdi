#include <stdio.h>
int main(void){
    int t;

    printf("\t[1].- Pizza sencilla.\n");
    printf("\t[2].- Pizza mediana.\n");
    printf("\t[3].- Pizza familiar.\n");
    printf("\t[4].- Pizza jumbo.\n");
    printf("Seleccione la pizza que desea comprar: ");
    scanf("%i", &t);

    switch(t){
        case 1:
            printf("Tu pizza vale: $50.\n");
            break;
        case 2:
            printf("Tu pizza vale: $100.\n");
            break;
        case 3:
            printf("Tu pizza vale: $150.\n");
            break;
        case 4:
            printf("Tu pizza vale: $200.\n");
            break;
        default:
            printf("El número seleccionado no es valido.\n");
    }
    printf("Gracias por su compra :)\n");
    return 0;
}
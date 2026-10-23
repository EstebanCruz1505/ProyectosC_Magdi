#include <stdio.h>

int main(void){

    float pi, k, c, pt;
    char tipo;
    int t;

    printf("Seleccione el tipo de uva a vender:\n\t[A].-Tipo A.\n\t[B].-Tipo B.\n\tSelección: ");
    scanf("%c", &tipo);

    switch(tipo){

        case 'A':
        case 'a':

            printf("Seleccione el tamaño de uva a vender:\n\t[1].-Tamaño 1: Cargo de 2 centavos al precio inicial.\n\t[2].-Tamaño 2: Cargo de 30 centavos al precio inicial.\n\tSelección: ");
            scanf("%i", &t);

            switch(t){
                case 1:

                    printf("\tIngrese el precio inicial por kilo de uva: $");
                    scanf("%f", &pi);
                    printf("\tIngrese la cantidad de kilos a entregar: ");
                    scanf("%f", &k);
                    c = pi+0.02;
                    pt = c*k;
                    printf("El pago total de la venta es de: $%.2f\n", pt);

                    break;
                case 2:

                    printf("\tIngrese el precio inicial por kilo de uva: $");
                    scanf("%f", &pi);
                    printf("\tIngrese la cantidad de kilos a entregar: ");
                    scanf("%f", &k);
                    c = pi+0.30;
                    pt = c*k;
                    printf("El pago total de la carga es de: $%.2f\n", pt);

                    break;
                default:

                    printf("ESE TAMAÑO DE UVAS NO ESTÁ DISPONIBLE.\n");

                    break;
            }
            break;
        case 'B':
        case 'b':

            printf("Seleccione el tamaño de uva a vender:\n\t[1].-Tamaño 1: Rebaja de 30 centavos al precio inicial.\n\t[2].-Tamaño 2: Rebaja de 50 centavos al precio inicial.\n\tSelección: ");
            scanf("%i", &t);

            switch(t){
                case 1:

                    printf("\tIngrese el precio inicial por kilo de uva: $");
                    scanf("%f", &pi);
                    printf("\tIngrese la cantidad de kilos a entregar: ");
                    scanf("%f", &k);
                    c = pi-0.30;
                    pt = c*k;
                    printf("El pago total de la venta es de: $%.2f\n", pt);

                    break;
                case 2:

                    printf("\tIngrese el precio inicial por kilo de uva: $");
                    scanf("%f", &pi);
                    printf("\tIngrese la cantidad de kilos a entregar: ");
                    scanf("%f", &k);
                    c = pi-0.50;
                    pt = c*k;
                    printf("El pago total de la carga es de: $%.2f\n", pt);

                    break;
                default:

                    printf("ESE TAMAÑO DE UVAS NO ESTÁ DISPONIBLE.\n");

                    break;
            }
            break;
        default:

            printf("NO DISPONEMOS DE ESE TIPO DE UVA. ¡DISCULPE LAS MOLESTIAS!\n");

            break;
    }

    return 0;
    
}

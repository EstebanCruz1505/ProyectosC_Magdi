#include <stdio.h>

int main(void) {

    float a, b, s, r, m, d;
    int op;
    char respuesta;

    do {
        printf("Ingresa tus numeros a operar: \n");
        scanf("%f %f", &a, &b);
        printf("\n¿Qué número de operación desea realizar? (1: suma, 2: resta, 3: multiplicación, 4: división): ");
        scanf("%i", &op);

        if (op == 1) {
            s = a + b;
            printf("\nSuma es: %.2f \n\n", s);
        } else if (op == 2) {
            r = a - b;
            printf("\nResta es: %.2f \n\n", r);
        } else if (op == 3) {
            m = a * b;
            printf("\nMultiplicación es: %.2f \n\n", m);
        } else if (op == 4) {
            d = a / b;
            printf("\nDivisión es: %.2f \n\n", d);
        } else {
            printf("\nDebe ingresar un número de operación válido.\n\n");
        }
        printf("\n\n\n\n¿Desea realizar otra operación? (s/n)");
        scanf(" %c", &respuesta);

    } while (respuesta == 's');
        printf("GRACIAS POR USAR ESTA CALCULADORA DE PRUEBA.");

    return 0;
}
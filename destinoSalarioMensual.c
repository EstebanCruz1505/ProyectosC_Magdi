#include <stdio.h>

int main(void){

    float as, pp, c, d, sueldo, sm;

    printf("Ingrese su salario semanal: ");
    scanf("%f", &sueldo);

    sm = sueldo*4;
    as = sm*0.15;
    pp = sm*0.02;
    c = sm*0.50;
    d = sm*0.15;

    printf("Se destinó: $%.2f para el ahorro.\n", as);
    printf("Se destinó: $%.2f para el pago de productos y servicios.\n", pp);
    printf("Se destinó: $%.2f para sus comidas.\n", c);
    printf("Se destinó: $%.2f para diversión.\n", d);

    return 0;
}
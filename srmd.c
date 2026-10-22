#include <stdio.h>

int main(void){

    float a, b, s, r, m, d;

    printf("Ingrese sus números a operar:\n");
    scanf("%f %f", &a, &b);

    s = a+b;
    r = a-b;
    m = a*b;
    d = a/b;

    printf("Tu suma es: %.2f. \nTu resta es: %.2f. \nTu multiplicación es: %.2f. \nTu división es: %.2f.\n", s, r, m, d);

    return 0;
}
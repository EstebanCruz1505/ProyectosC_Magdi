#include <stdio.h>
int main(void){

    int autobus, np;
    float km, cp, ct;

    printf("Ingrese el número de personas que viajan: ");
    scanf("%i", &np);

    if(np >= 20){

        printf("¿Cuántos kilometros va a recorrer?: ");
        scanf("%f", &km);
        printf("¿En que tipo de autobus desea viajar?\n\t[1].-Tipo A: $2 * Km\n\t[2].-Tipo B: $2.50 * Km\n\t[3].-Tipo C: $3 * Km\n\t");
        scanf("%i", &autobus);

        switch(autobus){
            case 1:
                cp = km*2;
                printf("\tSe deberá pagar un total de $%.2f por persona.\n", cp);
                break;
            case 2:
                cp = km*2.50;
                printf("\tSe deberá pagar un total de $%.2f por persona.\n", cp);
                break;
            case 3:
                cp = km*3;
                printf("\tSe deberá pagar un total de $%.2f por persona.\n", cp);
                break;
            default:
                printf("\tNo tenemos disponible ese tipo de autobus.\n");
                break;
        }

        if(autobus == 1 || autobus == 2 || autobus == 3){
            ct = cp*np;
            printf("\tEl costo total del viaje es de $%.2f\n", ct);
        }

    }else{
        printf("\tEl número mínimo de personas es de 20, este viaje no puede ser completado\n");
    }

    return 0;
}
#include <stdio.h>
int main(void){
    
    int des,ts;
    float peso,pago;
    int costo;
    
    printf("\tEntrada de datos\n\n");
    printf("Ingrese el peso del producto: \n");
    printf("Menor a 1kg el costo es $80 \n");
    printf("Mayor a 1kg y menor a 5kg el costo es $120 \n");
    printf("Mayor a 5kg y menor de 10kg el costo es de $200 \n");
    printf("Mayor a 10kg el costo es de $300 \n");
    scanf("%f", &peso);
    printf("\nIngrese el destino del envio\n");
    printf("[1].- Local\n");
    printf("[2].- Nacional\n");
    printf("[3].- Internacional\n");
    scanf("%d", &des);
    printf("Ingrese el tipo de servicio\n");
    printf("[1].- Estandar\n");
    printf("[2].- Express\n");
    scanf("%d", &ts);
    
    pago=0;
    costo=0;
    
    if(peso<=1)
        costo=80;
    else{
        if(peso<=5)
            costo=120;
        else{
            if(peso<=10)
                costo=200;
            else
                costo=300;
        }
    }
    
    //En este punto del programa ya se sabe cuánto le debo cobrar al cliente
    //como el costo local no tiene cargo extra no tiene caso revisarlo
    if(des==2)
        pago=costo+(costo*.25);
    else
        if(des==3)
            pago=costo+(costo*.6);
            
    //En este punto ya se hizo el cargo extra por el destino seleccionado
    //como el tipo de servicio estandar no tiene cargo extra, no se toma en cuenta
    if(ts==2)
        pago=pago+(costo*0.3);
        
    //En este punto ya se hizo el cargo por el tipo de servicio seleccionado
    if(ts==2 && des==1){
        printf("Su envío califica a un descuento del %5\n");
        pago=pago-(pago*0.05);
    }
    printf("El costo del envio es: %f",pago);
    return 0;
}

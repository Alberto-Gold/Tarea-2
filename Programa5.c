#include <stdio.h>

int main()
{
    float monto, descuento, total;

    printf("Ingrese el monto a pagar: ");
    scanf("%f", &monto);

    if (monto > 2500) {
        descuento = monto * 0.08;     // 8% de descuento
        total = monto - descuento;
        printf("Se aplico un descuento del 8%%.\n");
    } else {
        total = monto;
        printf("No aplica descuento.\n");
    }

    printf("El total a pagar es: %.2f pesos\n", total);

    return 0;
}

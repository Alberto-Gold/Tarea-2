#include <stdio.h>

int main() {
    float distancia_ida, distancia_total, precio_sin_descuento, precio_final;
    int dias;

    // Entrada de datos
    printf("Ingresa la distancia de ida en km: ");
    scanf("%f", &distancia_ida);

    printf("Ingresa el numero de dias de estancia: ");
    scanf("%d", &dias);

    // Cálculos
    distancia_total = distancia_ida * 2;              // ida y vuelta
    precio_sin_descuento = distancia_total * 0.23;    // precio sin descuento

    // Verificación del descuento
    if (dias > 7 && distancia_total > 800) {
        precio_final = precio_sin_descuento * 0.70;   // aplica 30% de descuento
    } else {
        precio_final = precio_sin_descuento;
    }

    // Resultado
    printf("El precio final del ticket es: %.2f pesos\n", precio_final);

    return 0;
}

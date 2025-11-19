#include <stdio.h>

int main() {
    float deposito, tasaMensual, meses, interes, total;

    // Entrada de datos
    printf("Ingrese la cantidad depositada: ");
    scanf("%f", &deposito);

    printf("Ingrese la tasa de interes mensual (en porcentaje): ");
    scanf("%f", &tasaMensual);

    printf("Ingrese el numero de meses: ");
    scanf("%f", &meses);

    // Cálculo del interés simple mensual
    interes = deposito * (tasaMensual / 100) * meses;
    total = deposito + interes;

    // Resultados
    printf("\n--- Resultado ---\n");
    printf("Interes generado en %0.0f meses: %.2f\n", meses, interes);
    printf("Cantidad total al final: %.2f\n", total);

    return 0;
}

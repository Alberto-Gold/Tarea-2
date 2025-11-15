#include <stdio.h>

int main()
{
    float dolares, pesos;
    const float TIPO_CAMBIO = 11.96;

    // Solicitar la cantidad en dólares
    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dolares);

    // Conversión
    pesos = dolares * TIPO_CAMBIO;

    // Resultado
    printf("\n%.2f dolares equivalen a %.2f pesos.\n", dolares, pesos);

    return 0;
}

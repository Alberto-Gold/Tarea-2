#include <stdio.h>
#define PI 3.141592

int main() 
{
    float radio, area, circunferencia;

    // Solicitar el radio
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    // Cálculos
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Resultados
    printf("\nResultados:\n");
    printf("Area del circulo: %.3f\n", area);
    printf("Circunferencia del circulo: %.3f\n", circunferencia);

    return 0;
}

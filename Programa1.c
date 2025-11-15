#include <stdio.h>

int main()
{
    float num1, num2;
    float suma, resta, multiplicacion;

    // Solicitar datos al usuario
    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    // Operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Resultados
    printf("\nResultados:\n");
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", multiplicacion);

    return 0;
}

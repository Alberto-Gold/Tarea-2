#include <stdio.h>

int main() {
    int num1, num2;

    // Entrada de datos
    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    // Validación para evitar división entre cero
    if (num2 == 0) {
        printf("No se puede dividir entre cero.\n");
        return 0;
    }

    // Verificación de divisibilidad
    if (num1 % num2 == 0) {
        printf("%d es divisible entre %d.\n", num1, num2);
    } else {
        printf("%d NO es divisible entre %d.\n", num1, num2);
    }

    return 0;
}

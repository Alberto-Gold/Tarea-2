#include <stdio.h>

int main() 
{
    int numero;

    // Entrada del número
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    // Generar la tabla de multiplicar desde 1 hasta 10
    printf("Tabla de multiplicar del %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

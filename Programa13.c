#include <stdio.h>

int main()
{
    int n, i;
    int suma = 0;

    printf("¿Cuántos elementos tendrá el arreglo? ");
    scanf("%d", &n);

    int arreglo[n]; // Declaración del arreglo

    // Lectura del arreglo
    printf("Ingresa los %d elementos del arreglo:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }

    // Suma de elementos
    for (i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}

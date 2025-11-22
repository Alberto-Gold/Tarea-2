#include <stdio.h>

int main() 
{
    int n;
    int positivos = 0, negativos = 0, nulos = 0;

    // Pedir el tamaño del arreglo
    printf("Ingresa el numero de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n]; // Declaración del arreglo

    // Llenar el arreglo
    for (int i = 0; i < n; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Contar positivos, negativos y nulos
    for (int i = 0; i < n; i++) {
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Resultados
    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}

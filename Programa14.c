#include <stdio.h>

int main() 
{
    int n, numero, contador = 0;

    // Pedir el tamaño del arreglo
    printf("Ingresa el numero de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];  // Declaración del arreglo

    // Llenar el arreglo
    for (int i = 0; i < n; i++) {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Pedir el número a buscar
    printf("Ingresa el numero a buscar dentro del arreglo: ");
    scanf("%d", &numero);

    // Contar cuántas veces aparece
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    // Resultado
    printf("El numero %d aparece %d veces en el arreglo.\n", numero, contador);

    return 0;
}

    // Resultados
    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}

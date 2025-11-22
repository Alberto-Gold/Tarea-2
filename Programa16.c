#include <stdio.h>

int main() 
{
    int pares[100];

    // Llenar el arreglo con los primeros 100 números pares
    for (int i = 0; i < 100; i++) {
        pares[i] = (i + 1) * 2;   // Genera 2, 4, 6, ..., 200
    }

    // Mostrar el contenido del arreglo
    printf("Los primeros 100 numeros pares son:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", pares[i]);
    }

    return 0;
}

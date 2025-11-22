#include <stdio.h>

int main() 
{
    int numero;

    printf("Programa que lee 100 numeros y determina si son positivos, negativos o nulos.\n\n");

    for (int i = 1; i <= 100; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            printf("El numero %d es POSITIVO.\n\n", numero);
        }
        else if (numero < 0) {
            printf("El numero %d es NEGATIVO.\n\n", numero);
        }
        else {
            printf("El numero es NULO (0).\n\n");
        }
    }

    return 0;
}

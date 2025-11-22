#include <stdio.h>

int main() 
{
    int suma = 0;

    for (int i = 10; i <= 50; i++) {
        if (i % 2 == 0) {   // Verifica si es par
            suma += i;     // Acumula la suma
        }
    }

    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

    return 0;
}

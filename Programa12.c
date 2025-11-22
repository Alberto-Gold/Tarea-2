#include <stdio.h>

int main()
{
    int n, i, esPrimo = 1;

    printf("Ingresa un numero natural: ");
    scanf("%d", &n);

    if (n <= 1) {
        esPrimo = 0;  // 0 y 1 no son primos
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                esPrimo = 0;  // Encontró divisor
                break;
            }
        }
    }

    if (esPrimo == 1) {
        printf("%d es un numero primo.\n", n);
    } else {
        printf("%d NO es un numero primo.\n", n);
    }

    return 0;
}

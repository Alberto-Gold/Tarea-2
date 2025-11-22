#include <stdio.h>

int main()
{
    float salario, aumento, nuevoSalario;

    printf("Ingrese el salario del trabajador: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        aumento = salario * 0.15;   // 15% de aumento
        nuevoSalario = salario + aumento;
        printf("Se aplico un aumento del 15%%.\n");
    } else {
        aumento = salario * 0.12;   // 12% de aumento
        nuevoSalario = salario + aumento;
        printf("Se aplico un aumento del 12%%.\n");
    }

    printf("El nuevo salario es: %.2f pesos\n", nuevoSalario);

    return 0;
}

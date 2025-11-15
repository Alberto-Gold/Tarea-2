int main() 
{
    float deposito, tasa, interes;

    // Solicitar datos
    printf("Ingresa la cantidad depositada: ");
    scanf("%f", &deposito);

    printf("Ingresa la tasa de interes mensual (en porcentaje): ");
    scanf("%f", &tasa);

    // Calcular interés mensual
    interes = deposito * (tasa / 100);

    // Resultado
    printf("\nInteres generado en un mes: %.2f\n", interes);

    return 0;
}

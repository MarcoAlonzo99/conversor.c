#include <stdio.h>

int main() {
    int opcion;
    float cantidad;
    
    // Tasas aproximadas
    float GTQ_USD = 0.13;
    float GTQ_EUR = 0.12;
    float USD_GTQ = 7.70;
    float USD_EUR = 0.92;
    float EUR_GTQ = 8.30;
    float EUR_USD = 1.09;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Dolares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2f USD\n", cantidad * GTQ_USD);
            break;

        case 2:
            printf("Resultado: %.2f EUR\n", cantidad * GTQ_EUR);
            break;

        case 3:
            printf("Resultado: %.2f GTQ\n", cantidad * USD_GTQ);
            break;

        case 4:
            printf("Resultado: %.2f EUR\n", cantidad * USD_EUR);
            break;

        case 5:
            printf("Resultado: %.2f GTQ\n", cantidad * EUR_GTQ);
            break;

        case 6:
            printf("Resultado: %.2f USD\n", cantidad * EUR_USD);
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
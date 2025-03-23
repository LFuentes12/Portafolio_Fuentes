#include <stdio.h>

void convertirMoneda(float cantidad, int monedaOrigen, int monedaDestino) {
    // Definir las tasas de cambio
    float tasaQuetzalUSD = 0.13; // 1 Quetzal = 0.13 USD
    float tasaQuetzalEUR = 0.12; // 1 Quetzal = 0.12 EUR
    float tasaUSDQuetzal = 7.69; // 1 USD = 7.69 Quetzales
    float tasaUSDEUR = 0.93;     // 1 USD = 0.93 EUR
    float tasaEURQuetzal = 8.15; // 1 EUR = 8.15 Quetzales
    float tasaEURUSD = 1.08;     // 1 EUR = 1.08 USD

    float resultado = 0.0;

    // Convertir según las opciones seleccionadas
    if (monedaOrigen == 1 && monedaDestino == 2) {
        resultado = cantidad * tasaQuetzalUSD; // Quetzales a USD
    } else if (monedaOrigen == 1 && monedaDestino == 3) {
        resultado = cantidad * tasaQuetzalEUR; // Quetzales a EUR
    } else if (monedaOrigen == 2 && monedaDestino == 1) {
        resultado = cantidad * tasaUSDQuetzal; // USD a Quetzales
    } else if (monedaOrigen == 2 && monedaDestino == 3) {
        resultado = cantidad * tasaUSDEUR; // USD a EUR
    } else if (monedaOrigen == 3 && monedaDestino == 1) {
        resultado = cantidad * tasaEURQuetzal; // EUR a Quetzales
    } else if (monedaOrigen == 3 && monedaDestino == 2) {
        resultado = cantidad * tasaEURUSD; // EUR a USD
    }

    printf("El resultado de la conversión es: %.2f\n", resultado);
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    // Mostrar el menú de opciones
    printf("Conversor de Monedas\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dolares Estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");

    // Solicitar al usuario la moneda de origen
    printf("Elige la moneda de origen (1-Quetzales, 2-USD, 3-Euros): ");
    scanf("%d", &opcionOrigen);

    // Solicitar la cantidad a convertir
    printf("Ingresa la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Solicitar al usuario la moneda de destino
    printf("Elige la moneda de destino (1-Quetzales, 2-USD, 3-Euros): ");
    scanf("%d", &opcionDestino);

    // Verificar que las opciones sean válidas
    if (opcionOrigen < 1 || opcionOrigen > 3 || opcionDestino < 1 || opcionDestino > 3) {
        printf("Opción inválida, por favor selecciona una opción válida (1, 2 o 3).\n");
    } else if (opcionOrigen == opcionDestino) {
        printf("La moneda de origen y destino son iguales, no se necesita conversión.\n");
    } else {
        // Realizar la conversión
        convertirMoneda(cantidad, opcionOrigen, opcionDestino);
    }

    return 0;
}

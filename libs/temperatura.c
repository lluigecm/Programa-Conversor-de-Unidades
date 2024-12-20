#include <stdio.h>

void celsiusParaOutros(float celsius, float *fahrenheit, float *kelvin) {
    *fahrenheit = (celsius * 9 / 5) + 32;
    *kelvin = celsius + 273.15;
}

void fahrenheitParaOutros(float fahrenheit, float *celsius, float *kelvin) {
    *celsius = (fahrenheit - 32) * 5 / 9;
    *kelvin = *celsius + 273.15;
}

void kelvinParaOutros(float kelvin, float *celsius, float *fahrenheit) {
    *celsius = kelvin - 273.15;
    *fahrenheit = (*celsius * 9 / 5) + 32;
}

int main() {
    int escolha;
    float entrada, celsius, fahrenheit, kelvin;

    printf("Conversor de Temperaturas\n");
    printf("Escolha uma opção:\n");
    printf("1. Celsius para Fahrenheit e Kelvin\n");
    printf("2. Fahrenheit para Celsius e Kelvin\n");
    printf("3. Kelvin para Celsius e Fahrenheit\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &entrada);
            celsiusParaOutros(entrada, &fahrenheit, &kelvin);
            printf("%.2f Celsius = %.2f Fahrenheit\n", entrada, fahrenheit);
            printf("%.2f Celsius = %.2f Kelvin\n", entrada, kelvin);
            break;

        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &entrada);
            fahrenheitParaOutros(entrada, &celsius, &kelvin);
            printf("%.2f Fahrenheit = %.2f Celsius\n", entrada, celsius);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", entrada, kelvin);
            break;

        case 3:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &entrada);
            kelvinParaOutros(entrada, &celsius, &fahrenheit);
            printf("%.2f Kelvin = %.2f Celsius\n", entrada, celsius);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", entrada, fahrenheit);
            break;

        default:
            printf("Escolha inválida. Tente novamente.\n");
    }

    return 0;
}
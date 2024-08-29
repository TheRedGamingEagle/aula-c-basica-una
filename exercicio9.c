#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius (graus de gente normal): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit (graus de americano burro) é: %.2f°F\n", fahrenheit);

    return 0;
}

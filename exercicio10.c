#include <stdio.h>
#include <ctype.h>  // pra função tolower

int main() {
    char str[1000];
    int i, count = 0;

    printf("Lança uma string aí no meu peito pae: ");
    //usei o fgets pra evitar estouro de buffer
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Converte o caractere para minúsculo para facilitar a comparação
        char ch = tolower(str[i]);

        // Verifica se o caractere é uma vogal
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Número de vogais na string: %d\n", count);

    return 0;
}

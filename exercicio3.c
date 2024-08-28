#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool primo(int N)
{
    //Complexidade de tempo O(√N)
    //Complexidade de espaço O(1)
    // Essa parte é obvia
    if (N <= 1) {
        return false;
    }

    // Essa tbm (2 e 3 é primo)
    if (N <= 3) {
        return true;
    }

    // Isso aq ja tira uma cacetada de numero
    if (N % 2 == 0 || N % 3 == 0) {
        return false;
    }

    // Procura Divisores de 5 ate raiz de N
    for (int i = 5; i * i <= N; i += 6) {
      
        // Se N é divisivel por i ou (i + 2), não é primo
        
        if (N % i == 0 || N % (i + 2) == 0) {
            return false;
        }
    }

    // Se n tiver divisores é primo
    return true;
}

// Codigo Principal
int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (primo(num)) {
        printf("Seu Numero É Primo");
    }
    else {
        printf("Seu Numero Não É Primo");
    }

    return 0;
}
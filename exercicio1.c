#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {

        printf("Seu Numero é Par")

    }

    else
    {

        printf("Seu Numero É Impar")

    }

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
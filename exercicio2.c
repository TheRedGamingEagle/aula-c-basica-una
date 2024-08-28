#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
    int num;
    int answ;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        answ += i;
    }

    printf("Soma = %d\n", answ);
}
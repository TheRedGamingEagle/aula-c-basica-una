#include <stdio.h>
#include <string.h>

int main() {
    char str[10000], temp;
    int i, j;

    // pede a str pro user
    printf("Digite uma string ai man: ");
    fgets(str, sizeof(str), stdin);

    // remove o caractere de nova linha (tava bugando pkrl quando tinha lb)
    str[strcspn(str, "\n")] = '\0';

    // pega o tamanho (lá ele kskssksksk)
    int length = strlen(str);

    // troca os caractere do inicio pelso do final
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Exibe a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
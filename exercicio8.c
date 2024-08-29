//vc não colocou um algoritimo obrigatório, ent vou usar o bogosort pq eu n escrevo um a uns anos ksksksksksksksk

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Função para verificar se o array está ordenado
bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Função para embaralhar o array
void shuffle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int rand_index = rand() % n;
        int temp = arr[i];
        arr[i] = arr[rand_index];
        arr[rand_index] = temp;
    }
}

// Algoritmo Bogosort
void bogosort(int arr[], int n) {
    while (!is_sorted(arr, n)) {
        shuffle(arr, n);
    }
}

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios

    int arr[] = {3, 1, 4, 69, 5, 420};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ordena o array usando Bogosort
    bogosort(arr, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

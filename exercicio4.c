#include<stdio.h>

int main() {

    int num;
    printf("Fala o numero ai man: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", i, num, i * num);
    }

    return 0;
}
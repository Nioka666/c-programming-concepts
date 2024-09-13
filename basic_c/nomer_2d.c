#include <stdio.h>

int main() {
    int num1, num2;
    int sum, average;
    int square1, square2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &num1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    average = sum / 2;
    square1 = num1 * num1;
    square2 = num2 * num2;

    printf("\nJumlah dari kedua bilangan: %d\n", sum);
    printf("Rata-rata dari kedua bilangan: %d\n", average);
    printf("Kuadrat dari bilangan pertama: %d\n", square1);
    printf("Kuadrat dari bilangan kedua: %d\n", square2);

    return 0;
}

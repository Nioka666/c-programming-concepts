#include <stdio.h>

int main()
{
    const float PI = 3.14f;
    float r, luas;

    printf("Masukkan jari-jari lingkaran : ");
    scanf("%f", &r);

    luas = PI * r * r;

    printf("\nLuas lingkaran = %.2f", luas);

    return 0;
}
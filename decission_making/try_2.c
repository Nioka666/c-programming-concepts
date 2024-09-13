#include <stdio.h>

int main()
{
    float uang_dollar;
    float uang_rupiah;
    const float KURS = 11090.0;

    printf("Masukkan nominal uang dollar : ");
    scanf("%f", &uang_dollar);

    uang_rupiah = KURS * uang_dollar;

    printf("\nNilai rupiah dari %.2f US dollar \nadalah Rp. %.2f", uang_dollar, uang_rupiah);

    return 0;
}
#include <stdio.h>

int main()
{
    int pil, bil1, bil2, hasil;

    printf("Masukkan bilangan pertama : ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua : ");
    scanf("%d", &bil2);

    printf("Menu operasi matematika : \n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");

    printf("Masukkan pilihan anda : ");
    scanf("%d", &pil);

    if (pil == 1)
    {
        hasil = bil1 + bil2;
        printf("\nHasil penjumlahan %d + %d = %d", bil1, bil2, hasil);
    }
    else if (pil == 2)
    {
        hasil = bil1 - bil2;
        printf("\nHasil pengurangan %d - %d = %d", bil1, bil2, hasil);
    }
    else if (pil == 3)
    {
        hasil = bil1 / bil2;
        printf("\nHasil pembagian %d / %d = %d", bil1, bil2, hasil);
    }
    else if (pil == 4)
    {
        hasil = bil1 * bil2;
        printf("\nHasil perkalian %d x %d = %d", bil1, bil2, hasil);
    }
    else
    {
        printf("Pilihan tidak tersedia");
    }

    return 0;
}
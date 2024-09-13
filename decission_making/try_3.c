#include <stdio.h>

int main()
{
    int n;
    int lembar100000, lembar50000;
    int lembar20000, lembar10000;
    int lembar5000, lembar2000;
    int lembar1000, sisa;

    printf("Input jumlah uang dalam rupiah: ");
    scanf("%d", &n);

    lembar100000 = n / 100000;
    sisa = n % 100000;

    lembar50000 = sisa / 50000;
    sisa = sisa % 50000;

    lembar20000 = sisa / 20000;
    sisa = sisa % 20000;

    lembar10000 = sisa / 10000;
    sisa = sisa % 10000;

    lembar5000 = sisa / 5000;
    sisa = sisa % 5000;

    lembar2000 = sisa / 2000;
    sisa = sisa % 2000;

    lembar1000 = sisa / 1000;
    sisa = sisa % 1000;

    printf("%d lembar 100.000\n", lembar100000);
    printf("%d lembar 50.000\n", lembar50000);
    printf("%d lembar 20.000\n", lembar20000);
    printf("%d lembar 10.000\n", lembar10000);
    printf("%d lembar 5.000\n", lembar5000);
    printf("%d lembar 2.000\n", lembar2000);
    printf("%d lembar 1.000\n", lembar1000);
    printf("Sisa = %d\n", sisa);

    return 0;
}

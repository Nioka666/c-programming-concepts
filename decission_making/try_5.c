#include <stdio.h>

int main()
{
    double a, b, c, diskriminan;

    printf("Masukkan nilai a: ");
    scanf("%lf", &a);
    printf("Masukkan nilai b: ");
    scanf("%lf", &b);
    printf("Masukkan nilai c: ");
    scanf("%lf", &c);

    diskriminan = b * b - 4 * a * c;

    printf("Diskriminan dari persamaan kuadrat adalah: %.2lf\n", diskriminan);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, x1, x2, realPart, imagPart;

    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Masukkan nilai b : ");
    scanf("%f", &b);

    printf("Masukkan nilai c : ");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Diskriminan (D) = %.2f\n", D);
        printf("Akar-akar real yang berlainan: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("Diskriminan (D) = %.2f\n", D);
        printf("Akar-akar real yang kembar: x1 = x2 = %.2f\n", x1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Diskriminan (D) = %.2f\n", D);
        printf("Akar-akar imaginair yang berlainan: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

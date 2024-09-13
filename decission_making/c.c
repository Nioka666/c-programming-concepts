#include <stdio.h>

int main()
{
    double x = 2.0, y, a = 1.5, b = 3.0, c = 1.0, z = 4.0;

    y = b * x * x + 0.5 * x - c;
    printf("Hasil perhitungan (1): y = %.2lf\n", y);

    y = 0.3 * x * z / (2 * a);
    printf("Hasil perhitungan (2): y = %.2lf\n", y);

    return 0;
}
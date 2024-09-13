#include <stdio.h>

int main()
{
    int n, bil_triangular = 0;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    printf("Bilangan triangular dari %d = ", n);

    for (int x = n; x > 0; x--)
    {
        printf("%d", x);
        if (x > 1)
        {
            printf(" + ");
        }
        bil_triangular += x;
    }
    printf(" = %d", bil_triangular);

    return 0;
}
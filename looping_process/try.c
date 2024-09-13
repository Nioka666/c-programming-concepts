#include <stdio.h>

int main()
{
    int n, triangular = 0;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    printf("Bilangan triangular dari %d adalah : ", n);

    for (int i = n; i > 0; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" + ");
        }

        triangular += i;
    }
    printf(" = %d ", triangular);

    return 0;
}
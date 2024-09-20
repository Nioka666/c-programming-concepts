#include <stdio.h>

int main()
{
    int n, i;
    long long faktorial = 1;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf("*");
        }
        faktorial *= i;
    }
    printf("\nFaktorial dari %d : %d", n, faktorial);

    return 0;
}
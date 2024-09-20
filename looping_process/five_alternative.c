#include <stdio.h>

int main()
{
    int n, i;
    int bil_ganjil = 1;

    printf("Masukkan banyak deret bilangan ganjil : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", bil_ganjil);
        bil_ganjil += 2;
    }
    return 0;
}
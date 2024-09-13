#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    if (n % 2 == 1)
    {
        int index = 0;
        for (int i = 1; i <= n; i += 2)
        {
            printf("%d ", i);
            index++;
        }
        printf("Bilangan ganjil ke %d", index);
    }
    else
    {
        printf("%d bukan bilangan ganjil", n);
    }

    return 0;
}
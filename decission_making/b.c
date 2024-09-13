#include <stdio.h>

int main()
{
    int x;

    x = (2 + 3) - 10 * 2;
    printf("Nilai x pada (1) adalah: %d\n", x);

    x = (2 + 3) - (10 * 2);
    printf("Nilai x pada (2) adalah: %d\n", x);

    x = 10 % 3 * 2 + 1;
    printf("Nilai x pada (3) adalah: %d\n", x);

    return 0;
}
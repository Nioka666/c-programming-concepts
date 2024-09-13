#include <stdio.h>

int main()
{
    int var_bulat = 32767;
    double var_pecahan1 = 339.2345678;
    double var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';

    printf("%d \n", var_bulat);
    printf("%.7lf \n", var_pecahan1);
    printf("%e \n", var_pecahan2);
    printf("%c \n", var_karakter);

    return 0;
}

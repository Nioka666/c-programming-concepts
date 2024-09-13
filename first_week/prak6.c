/*
    Program ini menambahkan 2 nilai integer dan menampilkan hasilnya
*/

// komen satu baris

/*
    komentar multi baris
*/

#include <stdio.h>

int main () {
    // mendeklarasikan variable bertipe integer
    int value1, value2, sum;

    // meng assign atau mengisi variable dengan nilai
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    // tampilkan hasilnya 
    printf("The sum of %d and %d is %d", value1, value2, sum);

    return 0;
}
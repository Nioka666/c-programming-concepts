#include <stdio.h>

int main()
{
    int nilai_angka;
    char *nilai_huruf;

    printf("Masukkan nilai angka : ");
    scanf("%d", &nilai_angka);

    if (nilai_angka <= 40)
    {
        nilai_huruf = "E";
    }
    else if (nilai_angka > 40 && nilai_angka <= 55)
    {
        nilai_huruf = "D";
    }
    else if (nilai_angka > 55 && nilai_angka <= 60)
    {
        nilai_huruf = "C";
    }
    else if (nilai_angka > 60 && nilai_angka <= 80)
    {
        nilai_huruf = "B";
    }
    else if (nilai_angka > 80 && nilai_angka <= 100)
    {
        nilai_huruf = "A";
    }
    else
    {
        nilai_huruf = "Tidak diketahui";
    }

    printf("Nilai huruf adalah %s", nilai_huruf);

    return 0;
}
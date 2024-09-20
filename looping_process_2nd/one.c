#include <stdio.h>

int main()
{
    char ch[100];

    printf("Ketikkan karakter (program akan berhenti jika Anda menekan 'X'):\n");
    fgets(ch, sizeof(ch), stdin);

    printf("%s", ch);
    return 0;
}

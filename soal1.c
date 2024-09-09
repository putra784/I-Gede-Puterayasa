#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compareIgnoreCase(char str1[], char str2[])
{
    int i = 0;

    // Bandingkan karakter per karakter tanpa memperhatikan besar kecil huruf
    while (str1[i] && str2[i])
    {
        if (tolower(str1[i]) != tolower(str2[i]))
        {
            return 0; // Tidak mirip
        }
        i++;
    }

    // Pastikan panjang string juga sama
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main()
{
    char satu[100];
    char dua[100];

    printf("Masukkan Karakter1 : ");
    scanf("%s", satu);

    printf("Masukkan Karakter2 : ");
    scanf("%s", dua);

    if (strcmp(satu, dua) == 0)
    {
        printf("MIRIP");
    }

    else if (compareIgnoreCase(satu, dua))
    {
        printf("IDENTIK");
    }
    else
    {
        printf("BERBEDA");
    }

    return 0;
}

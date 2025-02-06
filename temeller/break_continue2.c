#include <stdio.h>

int main()
{
    int sayi, asal_durum = 1;
    printf("sayı giriniz:");
    scanf("%d", &sayi);
    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asal_durum = 0;
            break;
        }
    }
    if (asal_durum == 1 && sayi>=2)
        printf("%d sayısı asaldır.\n", sayi);
    else
        printf("%d sayısı asal değildir.\n", sayi);
}

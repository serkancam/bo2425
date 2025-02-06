#include <stdio.h>

int main()
{
    int key;
    printf("bir değer giriniz:");
    scanf("%d", &key);

    switch (key)
    {
    case 0:
    case 10:
        printf("sıfır seçildi:\n");
        printf("sıfrıncı işlem yapıalcak.\n");
        break;

    case 1:
    case 11:
        printf("bir seçildi:\n");
        printf("birinci işlem yapıalcak.\n");
        break;

    case 2:
    case 12:
        printf("iki seçildi:\n");
        printf("ikinci işlem yapıalcak.\n");
        break;

    default:
        printf("0-1-2 dışındaki seçimler yapıldı");
        break;
    }
}

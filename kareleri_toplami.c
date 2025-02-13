#include <stdio.h>

// sayının basamakalarının rakam değerlerinin toplamını bulan ve geri döndüren fonksiyonu yazınız.

int basamak_topla(int sayi)
{
    int donecek;
    while (sayi != 0)
    {
        donecek = donecek + (sayi % 10); // donecek+=sayi%10
        sayi /= 10;                      // sayi=sayi/10
    }
    return donecek;
}
//bir sayının tek mi çift mi olduğunu bularak tek ise 1 çift ise değerini gönderen fonksiyonu yapınız.
int ciftmi(int sayi)
{
    //sayı tekse 1 çiftse 0 gönderir
    return sayi&1;//örneğin 33 sayısı gelsin
}

int main()
{
    int giden=100254;
    int donen=basamak_topla(giden);//14
    printf("sonuc=%d\n",donen);
    return 0;
}

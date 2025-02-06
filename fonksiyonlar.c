#include <stdio.h>
/*

dönüş_tipi fonksiyon_adi([parametreler])
{
    işlemler1;
    işlemler2;
    işlemlern;

    [return] [deger];
}

* eğer hesaplanan değer int olan bir fonskiyon varsa int dönüş tipi yazılır
* Eğer fonksiyon değer döndürmüyorsa void kelimesi yazılır.
 */

// tanımlanma
void merhaba_de(int adet)
{
    printf("%ld\n", sizeof(adet));
    for (int i = 0; i < adet; i++)
    {
        printf("merhaba\n");
    }
}
int ebob(int a, int b)
{
    int ek, eb, kl;
    if (a == b)
    {
        return a;
    }
    else if (a < b)
    {
        ek = a;
        eb = b;
        /* code */
    }
    else
    {
        ek = b;
        eb = a;
    }
    while (eb % ek != 0)
    {
        kl = eb % ek;
        eb = ek;
        ek = kl;
    }
    return ek;
}

int asal_mi(int sayi)
{
    // sayi asalsa sonuc değeri 1 değilse 0
    int sonuc = 1;
    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            sonuc = 0;
            break;
        }
    }

    return sonuc;
}
int main()
{
    // fonskiyon çağrıları
    merhaba_de(5);
    merhaba_de(2);
    merhaba_de(3);

    int sonuc = ebob(345, 150);
    printf("%d\n", sonuc);
    // int a=5,b=8;
    // int c=0 && b++;
    // printf("b=%d\n",b);
    return 0;
}

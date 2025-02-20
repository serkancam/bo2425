#include <stdio.h>

int a=8;//global değişkenler
void f1()
{
   printf("f1 %d\n", a);
   printf("%s\n",__TIME__);
   printf("%s\n",__FILE__);
}

int main()
{ // başla
    int a = 5;
    int b = 3;

    f1();
    {
        int b = 8;
        printf("%d\n", a);
        int c=20;
    }
    printf("%d\n", b);
    /*
    a- her değişken tanımlanmdığı küme parantezi içinde geçerlidir.Dışında tanımsızdır.
    b- bu kurala göre her fonksiyon çağrısında fonksiyon içindeki ilkel değişkenler ve değerleri o fonksiyon içinde geçerlidir.
    c- fonksiyonlara değer veya referans/adres gönderiliri. Referans adres konusu 2 hafta sonra işlenecektir.

    */
} // bitir


#include <stdio.h>

int main()
{
    int ts1=5;
    short ts2=30;
    char ts3=78;
    unsigned int its1=-35;
    printf("tam sayılar:\n");
    printf("ts1=%d,ts2=%d,ts3=%d,its1=%d\n",ts1,ts2,ts3,its1);
    printf("ts1=%d,ts2=%hd,ts3=%c,its1=%u\n",ts1,ts2,ts3,its1);
    return 0;
    /*
    C dilinde sağ taraf ve sol taraf değerleri vardır.
    atama operatörünün solunda değer atanacak neseneler, sağında değerler bulunur.
    değer gösteren yazımlara literal, bunlarn aktarıldğı yapıalra değişken diyeceğiz.
    tam sayı literaller int, ondalıklı sayı literaller double varsayılır.
    */
}
/*
derleme işlemi:
1- ***Bu şekilde a.out derlenmiş dosyası oluşur.(her seferinde a.out üstüne yazar)

gcc dosya_adi.c

2- Çıktı dosyasına özgün bir isim vererek ve hataları göstererek derleme

gcc -Wall dosya_adi.c -o cikti.out
*/
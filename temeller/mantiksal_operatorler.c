#include <stdio.h>

int main()
{
    // bir değişken 0 ise False, diğer tüm değerleri True
    int a=0,b=0;
    printf("%d ve %d=%d\n",a,b,a && b);
    a=0,b=1;
    printf("%d ve %d=%d\n",a,b,a && b);
     a=1,b=0;
    printf("%d ve %d=%d\n",a,b,a && b);
     a=1,b=1;
    printf("%d ve %d=%d\n",a,b,a && b);


    a=0,b=0;
    printf("%d veya %d=%d\n",a,b,a || b);
    a=0,b=1;
    printf("%d veya %d=%d\n",a,b,a || b);
     a=1,b=0;
    printf("%d veya %d=%d\n",a,b,a || b);
     a=1,b=1;
    printf("%d veya %d=%d\n",a,b,a || b);

    int d1=-10,d2=0;

    printf("\n değil d1=%d  değil d2=%d\n",!d1,!d2);
    printf("d1=%d,d2=%d\n",d1,d2);

    //0 dışındaki bütün sayıların değili 0, diğerlerinin 1 dir.


    return 0;


}
/*
derleme işlemi:
1- ***Bu şekilde a.out derlenmiş dosyası oluşur.(her seferinde a.out üstüne yazar)

gcc dosya_adi.c

2- Çıktı dosyasına özgün bir isim vererek ve hataları göstererek derleme

gcc -Wall dosya_adi.c -o cikti.out
*/
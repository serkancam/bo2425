//tam_sayi_tipleri.c

#include <stdio.h>
// iki sağa yatık taksim açıklama satır
/* açıklama başla
Burası açıklama metni
açıklama bitir */
/*
include ve main arasına:
fonksiyon ve tip tanımlamaları ile define komutları gelir.
*/
int main()
{
    int a=30;
    unsigned long int b=300000000000;//eşitliğin sağındaki değer sola aktarılırken sol taraf tipine dönüştürülür.
    printf("a boyutu=%ld\n",sizeof(a));
    printf("b boyutu=%ld\n",sizeof(b));
    //bir sabiti(örenğin 30 u) long yapmak için(30L,30l) yazarız 
    //int sınırları içindeki her literal(sabit) int kabul edilir.
    printf("30 boyutu=%ld\n",sizeof(30));
    printf("30L boyutu=%ld\n",sizeof(30L));
    printf("3000000000 boyutu=%ld\n",sizeof(3000000000L));
    printf("-----------\n");
    int s1=0x14AF;//0x başa gelince sayı 16 lık(hexadecimal bir sayı olur)
    int s2=025;//0 başa gelince sayı 8 lik(octal bir sayı olur.)
    printf("s1=%d\n",s1);
    printf("s2=%d\n",s2);


    return 0;


}
/*
derleme işlemi:
1- ***Bu şekilde a.out derlenmiş dosyası oluşur.(her seferinde a.out üstüne yazar)

gcc dosya_adi.c

2- Çıktı dosyasına özgün bir isim vererek ve hataları göstererek derleme

gcc -Wall dosya_adi.c -o cikti.out
*/
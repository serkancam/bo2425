#include <stdio.h>

int main()
{
    /*
    if(şart1)
    {
        şart1 doğru(0 hariç sayılar) iken yapıalcaklar
    }
    else
    {
        şart1 (0) iken yapıalcaklar
    }
    */
    int yas;
    scanf("%d", &yas); // yas değerinin adresine klavyeden okunan değeri aktarır
    if (yas > 18 && yas <= 50)
    {
        printf("ehliyet alabilir.\n");
    }
    else
    {
        printf("ehliyet alamaz.\n");
    }
    // eğer bir blok altında(if,else,else-if,for,while..) tek satır işlem yapıalcaksa {} ihtiyaç yoktur.

    if (yas > 18 && yas <= 50)
        printf("ehliyet alabilir.\n");
       // yas=yas+1;
    else
        printf("ehliyet alamaz.\n");
    //her if yeni bir blok demektir. yani yeni bir karşoılaştırma karar süreci başlatır.
    // 18-50 yaş arası B,C sınıfı ehliyet alabilir.
    //51-60 yaş arası sadece C sınıfı ehliyet alabilir.
    //diğer durumlarda ehliyet alınamaz.
    if(yas>18 && yas<=50)
    printf("B,C ehliyeti alabilir.\n");
    else if(yas>50 && yas<=60)
    printf("C ehliyeti alabilir.\n");
    else
    printf("B,C ehliyeti alamaz.\n");

    /*
    if(yas>18 && yas<=50)
    printf("B,C ehliyeti alabilir.");
    if(yas>50 && yas<=60)
    printf("C ehliyeti alabilir.");
    else
    printf("ehliyet alamaz.");  
    */

}

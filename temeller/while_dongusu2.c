#include <stdio.h>

int main()
{
    //1'den 10'a kadar sayıların toplamını bulunuz
    int i=1,toplam=0,girilen;
    //döngü değişkenimizi
    printf("sayı:");
    scanf("%d",&girilen);
    while (i<=girilen)
    {
        toplam=toplam+i;//toplam+=i
        i++;
    }

    printf("toplam=%d\n",toplam);

    //kullanıcıdan bir pozitif tam sayı alarak o sayı kadar kullanıcıdan giriş alan ve bu sayıların çift olanlarını toplayan c kodunu yazınız.

    int adet,ct=0,sayi;
    i=1;
    printf("adet giriniz:");
    scanf("%d",&adet);
    while (i<=adet)
    {
        printf("%d. sayıyı giriniz:",i);
        scanf("%d",&sayi);
        if(sayi%2==0)
        { 
            ct=ct+sayi;
        }
        i++;
       

    }
    printf("çift sayılar toplamı=%d\n",ct);
    



    


}

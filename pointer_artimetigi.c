#include <stdio.h>

int main()
{
    /*
    & -> adres operatörü
    * -> pointertipi belirler,içerik gösterir    
    
    */

    int a=22;
    int dizi[5]={10,20,30,40,50};//dizi de bir adrestir.

    printf("%d\n",a);
    printf("%d\n",dizi);//dizi bir adres tutar. değer tutmaz.
    printf("%p \n",a);//bu a değerinin onaltılık(hexadecimal) sayı karşılığını gösterir.
    printf("%p\n",dizi);//dizi adres değeri tutar
    //diziler adres tutar aslında birer pointer denilebilir.
    printf("%d\n",dizi[0]);
    printf("%d\n",*dizi);
    //2. indisi ekrana yazdıralım
    printf("%d\n",dizi[2]);
    printf("%d\n",*(dizi+2));
    //aşağıdaki işlemlerden sonra yazılan printf çıkısı ne olur.

    dizi[3]=dizi[2]+dizi[3];
    printf("soru1=%d\n",dizi[3]);

    //aşağıdaki işlemlerden sonra yazılan printf çıkısı ne olur.
    *(dizi+1)=*(dizi+4) - *(dizi+3);
    printf("soru2=%d\n",dizi[1]);
    //aşağıdaki printf çıktısı ne olur?
    printf("%d \n",*dizi+1);

    //ilginç indis gösterimi
    printf("%d \n",3[dizi]);


}
#include <stdio.h>

int main()
{
    //döngü, bir başlangıç ve bitiş durumu şartına bağlı olarak tekrar eden örüntülerdir.
    //Döngüde genelde örüntünün değişlikliğini gösteren bir değişken vardır.
    // döngü şartı şartı ya True(0 hariç tüm sayılar) ya da False (0) olur.
    // Bu durum döngünün devam edip etmeyeceğini belirler
    /*
    while(şart)
    {
        işlemler;
    }

    while(şart)
    işlem1
    
     */
    /*
    while(1)
    printf("merhaba\n");
    sonsuz döngü
    */
   int i=0;
   while (i<5)
   {
    printf("%d\n",i);
    i++;
   }
   printf("birinci çıkıs:%d\n",i);
   i=0;
   while (i<5)
   {
    i++;
    printf("%d\n",i);
   }
   printf("ikinci çıkıs:%d\n",i);

    i=0;
   while (i<10)
   {
    i+=2;
    printf("%d\n",i);
   }
   printf("üçüncü çıkıs:%d\n",i);

   i=0;
   while(i++<5)
   printf("%d\n",i);
    printf("dördüncü çıkıs:%d\n",i);

    i=0;
   while((i+=2)<10)
   printf("%d\n",i);
    printf("beşinci çıkıs:%d\n",i);

    //10 9 8 7 .... 1
    i=10;
    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }    
    printf("altıncı çıkıs:%d\n",i);

}

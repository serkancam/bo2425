#include <stdio.h>

int main()
{
    int dizi1[3];//3 sayısı dizinin eleman sayısını belirler
    dizi1[0]=10;//0 indis(index) numarasıdır.
    dizi1[1]=24;
    dizi1[2]=38;
    printf("%d\n",dizi1[0]);
   // dizi1[3]=20; 3. indiste eleman yok
   //sizeof(nesne-tür) byte cinsinden boyut
    printf("dizi1 boyut = %lu \n",sizeof(dizi1));
    printf("dizi1 eleman sayısı = %lu \n",sizeof(dizi1)/sizeof(int));
    //dizileri başlangıçta değer ile başlatmak.
    int dizi2[]={10,20};
    printf("dizi2 eleman sayısı=%lu\n",sizeof(dizi2)/sizeof(int));
    //diziyi bir boyut ve ilk değerlerle başlatmak
    int dizi3[3]={20,30};
    printf("dizi3 eleman sayısı=%lu\n",sizeof(dizi3)/sizeof(int));
    printf("dizi3 2. indisi=%d\n",dizi3[2]);






}
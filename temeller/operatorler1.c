#include <stdio.h>

int main()
{
    //bir veya birden fazla değer alıp bir sonuç üreten işleç(operator)
    float f1=3/2;//kapalı dönüşüm
    int i1=3.0/2.0;
    //short int si0=65538; //hata çünkü sğ tarf sola sığmaz
    short int si1=(short)65538;//açık dönüşüm
    printf("%d\n",3/2);//1,1.0,1
    //printf("%d\n",3/2.0);//1.0,1.5,1
    printf("%f\n",f1);//1.0,1,1.5
   // printf("%f\n",3/2);//hata
    printf("%f\n",(float)(3/2));
    printf("%f\n",3/2.0);//1.5,2.0,1.5
    printf("%d\n",i1);
    // printf("%d\n",si1);
    printf("%hd\n",si1);
    //atama operatörleri sağdaki işlem sonucunu sola aktarırken kapalı tip dönüşümü yapar. Bunun tek olmayacağı durum sağdaki sonucun sol taraf değerinin kapsamından büyük olması.
    //soru1 aşağıdaki kod çalıştığında ekrana hangi değer yazar(s4)
    int s1=5,s2=6,s3;
    s3=18;

    //birleşik atama
    // s1+s3 sonucunu s3 e aktarmak
    //s3=s1+s3;
    s3+=s1;
    int s4=1;
    s4+=s1+s2+(s3/3);//19
    //s4/=s1+s2+(s3/3);//0
    printf("cevap:s4=%d\n",s4);//18,18,18,19







    return 0;
   


}

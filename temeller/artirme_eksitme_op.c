#include <stdio.h>

int main()
{
    // ++  ve -- 
    //bu operatörler değişkenin değerini kalıcı değiştirir.
    int a=2,b=4;
    a++;
    b= ++b + a++ + b;//yasak kullanım
    printf("b=%d\n",b);
    printf("a=%d\n",++a+1);
    printf("a=%d\n",a);
    printf("a=%d\n",++a);
    printf("a=%d\n",a++);
    printf("a=%d\n",++a);
    // ternary operator
    printf("%d\n", 3>20 ? 5 : 8);

    //olimpiyat sorusu
    int s1=5,s2=6,s3=5,s4;

    s3=s1>s2 &&  s3++;//1,0,0
    printf("s3=%d\n",s3);//ekrana ne yazar s3=?
    s4=s1>s2 && ++s2;//7,0,7
    printf("s2=%d\n",s2);//ekrana ne yazar s2=?

    s4=s1<s2 && ++s2;//7,0,7
    printf("s2=%d\n",s2);//ekrana ne yazar s2=?


    return 0;


}
/*
derleme işlemi:
1- ***Bu şekilde a.out derlenmiş dosyası oluşur.(her seferinde a.out üstüne yazar)

gcc dosya_adi.c

2- Çıktı dosyasına özgün bir isim vererek ve hataları göstererek derleme

gcc -Wall dosya_adi.c -o cikti.out
*/
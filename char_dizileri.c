#include <stdio.h>

int main()
{
    // int sayi=780;
    char isim[5];
    // printf("%d\n %c \n",sayi,sayi);
    scanf("%s",isim);
    printf("%s \n",isim);
    char cd1[]={'a','l','i','\0'};
    printf("%s\n",cd1);
    char soyad[30]="batihan";
    printf("soyad=%s \n",soyad);
    /*yasak işlem**
    char alan_adi[50];
    alan_adi[50]="bilgisayar";
    printf("alan_adi=%s \n",alan_adi);
    */
    cd1[0]++;
    cd1[1]++;
    printf("cd1 sonuc=%s\n",cd1);//bmi

    printf("isim dizisi= %ld\n",sizeof(isim));
    printf("cd1= %ld\n",sizeof(cd1));
    printf("isim[7]=%c\n",isim[7]);
    

}
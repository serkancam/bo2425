#include <stdio.h>

int main()
{
    int a=5;
    int b=8;
    float c=10;
    int sonuc;    
    sonuc=a+b;
    printf("a+b=%d\n",sonuc);
    sonuc=a-b;
    printf("a-b=%d\n",sonuc);
    sonuc=a*b;
    printf("a*b=%d\n",sonuc);
    sonuc=b/a;
    printf("b/a=%d\n",sonuc);
    sonuc=b%a;
    printf("b mod a=%d\n",sonuc);

    float sonucf=b/a;
    printf("sonucf b/a=%f\n",sonucf);//1.5  1.6   1.3 1.0

    return 0;


}

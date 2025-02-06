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
    int a=5,b=11,c=30,d=10;
    float s=5.2;
    a=b+c;
    b=a+c;
    c=a+b;
    d=d+a;
    s=s+a;
    printf("%f",s+b+c+d);//284.0,
    return 0;


}

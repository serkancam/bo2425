#include <stdio.h>

int main()
{
    // < > <= >= == !=;
    //karşılatırma operatörleri her zaman sonuç olarak ya 1 ya da 0 int değerini verir.
    int a=5;
    int b=8;
    int c;
    c=8;
    printf("a<b=%d\n",a<b);
    printf("a>b=%d\n",a>b);
    printf("a>=b=%d,b>=c=%d\n",a>=b,b>=c);
    printf("a<=b=%d,b<=c=%d\n",a<=b,b<=c);  
    printf("a==b=%d,b==c=%d\n",a==b,b==c);
    printf("a!=b=%d,b!=c=%d\n",a!=b,b!=c);


    printf("sonuc=%d\n",a+b>8-2);//1,7,7

    return 0;


}

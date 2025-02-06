#include <stdio.h>

int main()
{
    int a,b;//18 36
    scanf("%d %d",&a,&b);//a_değeri b_değeri
    //&a -> a nın adresini verir
    printf("a=%d,b=%d\n",a,b); 
    int sonuc=a>b?25:50;
    printf("sonuc=%d\n",sonuc);
    
    int sonuc2= (a>>2) + (b<<2);
    printf("sonuc2=%d\n",sonuc2);//?
    return 0;
}

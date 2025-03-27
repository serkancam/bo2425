#include <stdio.h>

void fonk_deger(int a)//call by value(değer ile çağırma)
{
    a=a+5;

}
void fonk_adres(int *a)//call by reference(adres ile çağırma)
{
    *a=*a+55;
    printf("fonksiyon  içinde a adresi=%p\n",a);//burada a deger değişkeninin adresini tutar
}
int main()
{
    int deger=82;//ilkel değişken
    fonk_deger(deger);//fonk_deger(7852);
    printf("deger=%d\n",deger);

    fonk_adres(&deger);
    printf("main içinde deger adresi=%p\n",&deger);
    printf("deger=%d\n",deger);

}
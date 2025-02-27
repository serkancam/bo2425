#include <stdio.h>

int main()
{
    //kullanıcıdan kaç sayı gireceği bilgisini alarak 
    //girilern sayıları bir diziye aktaran kodu yazınız.
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //diziye girilen sayıların ortalamasını bularak ekrana yazdırınız.
    float toplam=0;
    for (int i =0; i < n; i++)
    {
        toplam+=arr[i];
    }
    float ort=toplam/n;
    printf("arr ortalaması = %.4f\n",ort);
    


}
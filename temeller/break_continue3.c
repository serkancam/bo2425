#include <stdio.h>

int main()
{
    int sayi;
    float sonuc=0;    
    scanf("%d",&sayi);
    for(int i=1;i<30;i++)
    {
        if(sayi==i)//sıfıra bölme hatasını atlatmamızı sağlar.
        continue;
        sonuc+=1.0/(sayi-i);
    }
    printf("sonuc=%f\n",sonuc);
}

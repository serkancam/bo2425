#include <stdio.h>


int main()
{
    // int k,y,z;
    // k=y=z=3;
    // char isim[10]="ali";
    // printf("%lu\n",sizeof(isim));
    // // printf("%s\n",fonk());
    // printf("%d\n",k=y=z=8);

    int dizi[10]={1};
    int *p;
    p=dizi;

    *(p+3)=8;
   
    for(int i=0;i<10;i++)
    {
    printf("dizi:%d\n",dizi[i]);
    printf("pointer:%d\n",*(p+i));

   }

}
#include <stdio.h>

int main()
{
    int n=30;
    char isim[n];
    scanf("%s",&isim);//ali -> {'a','l','i','\0'}
   
    int k=0;
    while(isim[k]!='\0')
    {
        if(isim[k] <='z' && isim[k]>='a')
        isim[k]=isim[k]-32;
       
        k++;
    }
    printf("%s\n",isim);



}
#include <stdio.h>

int main()
{
    int n=30;
    char isim[n];
    scanf("%s",&isim);//ali -> {'a','l','i','\0'}
    printf("%s\n",isim);
    for(int i=0;i<n;i++)
    printf("%c -> %d\n",isim[i],isim[i]);
    printf("\n------------\n");   

    printf("%c\n",isim[1]);
    int k=0;
    while(isim[k]!='\0')
    {
        printf("isim[%d]=%c\n",k,isim[k]);
        k++;
    }



}
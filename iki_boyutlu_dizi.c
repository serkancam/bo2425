#include <stdio.h>

int main()
{
    //iki boyutlu dizileri tablo gibi düşünebiliriz
    // ilk boyut satırlar ikinci boyut sütunlar.
    int arr[3][3];
    arr[0][2]=30;
   // int arr3[224][224][3];
   for(int satir=0;satir<3;satir++)
   {
    for(int sutun=0;sutun<3;sutun++)
    {
        arr[satir][sutun]=(satir+1)*(sutun+1);
    }
   }

   for(int satir=0;satir<3;satir++)
   {
    for(int sutun=0;sutun<3;sutun++)
    {
        printf("%d \t",arr[satir][sutun]);
    }
    printf("\n");
   }



}
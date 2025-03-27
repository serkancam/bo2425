#include <stdio.h>

int main()
{
    int a=5;
    int b;
    b=a;
    //a=5 b=5
    b=8;
    //a=5 b=8
    int *c,*d;//int gostericileri(pointer)
    c=&a;
    d=&b; 

    printf("a=%d | a adresi=%p\n",a,&a);
    printf("b=%d | b adresi=%p\n",b,&b);

    printf("*c=%d c=%p\n",*c,c);//5 
    printf("*d=%d d=%p\n",*d,d);//8
    a=22;
    printf("*c=%d c=%p\n",*c,c);//22
    *c=38;
    printf("a=%d\n",a);//38
    d=c;
    printf("*d=%d\n",*d);


}
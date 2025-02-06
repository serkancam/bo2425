#include <stdio.h>

int main()
{
    // a for döngüsü içinde tanımlandığı için sadece o blokta geçerlidir.
    for (int a = 0; a < 5; a++)
        printf("%d\n", a);

    // printf("%d\n",a);

    // sonsuz döngü
    //  for(;;)
    //  printf("test\n");
    printf("----------------\n");
    int c = 8;
    for (; c < 12; c++)
    {
        printf("%d\n", c);
        c += 3;
    }
    printf("c=%d\n",c);
}

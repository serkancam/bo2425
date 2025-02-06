#include <stdio.h>

int main()
{
    int a, b, c; // 30>10>5->0
    scanf("%d %d %d", &a, &b, &c);
    // printf("%d %d %d\n",a,b,c);
    // girilen 3 sayıdan en büyüğünün değerini ekrana yazdıran kodu yazınız.
    // printf("%d\n", a>b>c);
    if (a >= b && a >= c)
        printf("%d\n", a);
    else if (b >= a && b >= c)
        printf("%d\n", b);
    else if (c >= a && c >= b)
        printf("%d\n", c);

    return 0;
}

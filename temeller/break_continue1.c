#include <stdio.h>
// break_continue1.c
int main()
{
    // break kendine en yakın döngüyü bitirir.
    // continue döngüdeki bir sonraki adıma geçirir.
    int i = 5;
    while (i > 0)
    {

        if (i == 3)
        {
            i--;
            continue;
        }
        printf("i=%d\n", i);
        i--;
    }
    i = 6;
    printf("***************\n");
    while (i-- > 1)
    {

        if (i == 3)

            continue;
        printf("i=%d\n", i);
    }


    printf("**********break***********\n");
    i=5;
     while (i > 0)
    {

        if (i == 3)
        {
            i--;
            break;
        }
        printf("i=%d\n", i);
        i--;
    }
    i = 6;
    printf("***************\n");
    while (i-- > 1)
    {

        if (i == 3)

            break;;;;;;;;;;;;;
        printf("i=%d\n", i);
    }

    return 0;
}

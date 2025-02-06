#include <stdio.h>

int main()
{
    int i = 5;
    do
    {
        i++;
        printf("i=%d\n", i);
    } while (i < 5);
    int t = 5;

    while (t < 5)
    {
        t++;
        printf("t=%d\n", t);
    }

    printf("****son kısım*****\n");
    for (int k = 1; k <= 3; k++)
    {
        int g=k;
        do
        {
            
            printf("k=%d,g=%d\n", k,g);
            g++;

        } while (g < 4);        

    }
}
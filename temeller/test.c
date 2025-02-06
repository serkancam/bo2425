#include <stdio.h>
int oi(int sayi)
{
    if (sayi<=1)
    {
        printf("%d",sayi);
        return sayi;
    }
    oi(sayi/2);
    printf("%d",sayi%2);
}
int main()
{
    int N,say=0;    
    printf("n gir:");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            say++;
            // printf("i=%d iken j=%d\n",i,j);

        }
        // printf("i bir artar.\n");
    }            
    printf("%d\n",say);
}

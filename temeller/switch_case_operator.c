// switch_case_operator.c
#include <stdio.h>

int main()
{
    int a;
    printf("a değeri:");
    scanf("%d", &a);

    switch (a)
    { 
    case 3:
    case 4:
    case 5:
        printf("a değeri 3.\n");
        printf("seçim 3 oldu.\n");
        break;
    case 1:
        printf("a değeri 1.\n");
        printf("seçim 1 oldu.\n");
        break;
    case 2:
        printf("a değeri 2.\n");
        printf("seçim 2 oldu.\n");
        break;
   default:
        printf("varsayılan işlem\n");
       // break;
    }
}

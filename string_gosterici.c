#include <stdio.h>

int main()
{

    char *isim="serkan";
    char* soyad="cam";
    char *il;
    il="edirne";
    // "yazi" çift tırnak içine bir karakter dizisi(string) yazıldığında otomatik olarak 2 işlem olur.
    // 1. işlem: bu string değeri bir adrese yerleştirilir.
    // 2. işlem: string sonm karakterine '\0' null değeri eklenir.

    //aşağıdaki işlem sonucu printf çıktısı ne olur.
    printf("soru1=%c\n",*(il+0)-32);//E


}
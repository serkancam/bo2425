#include <stdio.h>

int main()
{
    // 0:0-0:1-0:2-.....11:59
    int saat=0,dakika=0;

    while (saat<12)
    {
        while (dakika<60)
        { 
            printf("%d:%d\n",saat,dakika);
            dakika++;
        }
        dakika=0;
        saat++;
      
    }
    


}
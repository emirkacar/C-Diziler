#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));   // Her seferinde farklý sayý üretmesi icin srand() fonksiyonu kullanýlýr.

    for(int i =0;i<5;i++)
    {
        int x=rand();
        printf("%d\t",(x%10));  // 0-10 arasýnda sayý girmesini isteseydim x%10 olucaktý. 0-20 arasýnda sayý girmesini isteseydim x%20 olucaktý.
    }

    return 0;
}

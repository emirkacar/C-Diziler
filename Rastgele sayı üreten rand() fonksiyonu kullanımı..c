#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));   // Her seferinde farkl� say� �retmesi icin srand() fonksiyonu kullan�l�r.

    for(int i =0;i<5;i++)
    {
        int x=rand();
        printf("%d\t",(x%10));  // 0-10 aras�nda say� girmesini isteseydim x%10 olucakt�. 0-20 aras�nda say� girmesini isteseydim x%20 olucakt�.
    }

    return 0;
}

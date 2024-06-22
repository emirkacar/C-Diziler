#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Verilen bir diziyi tersine cevirme uygulamasý.
    int dizi[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n");
    int gecici[5];
    printf("Dizinin ters cevrilmis hali\n");
    for(int i=0;i<5;i++)
    {
        gecici[i]=dizi[4-i];

    }
    printf("\n");
    printf("Dizinin tersine cevrilmis hali\n\n");
    for(int i=0;i<5;i++)
    {

        printf("%d ",dizi[i]);
    }
    return 0;
}

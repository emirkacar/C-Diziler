#include <stdio.h>
#include <stdlib.h>


int main()
{

    //Dizinin elemanlarini kullan�c�dan alma uygulamas�.
    int dizi[13];
    for(int i=0;i<13;i++)
    {
        printf("dizi[%d]: ",i);
        scanf("%d",&dizi[i]);

    }

    for(int i=0;i<13;i++)
    {
        printf("%d ",dizi[i]);
    }



    return 0;
}

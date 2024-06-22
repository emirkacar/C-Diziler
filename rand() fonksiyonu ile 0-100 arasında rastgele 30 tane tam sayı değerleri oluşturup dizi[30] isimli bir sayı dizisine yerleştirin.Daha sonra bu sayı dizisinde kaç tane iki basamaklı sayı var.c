#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Dizide kac eleman var?\n");
    scanf("%d",&n);

    int dizi[n];
    srand(time(NULL));
    for(int i =0;i<=n;i++)
    {
        dizi[i]=rand() %100;
    }
    for(int i=0;i<=n;i++)
    {
        printf("'Dizi[%d]' dizisinin %d . elemani : %d\n",n,i,dizi[i]);
    }
    printf("\n");
    int sayac;
    for(int i=0;i<=n;i++)
    {
        if(9<dizi[i] && dizi[i]<100)
        {
            sayac++;
        }

    }
    printf("'Dizi[%d]' dizisinde %d tane iki basamakli sayi var.\n",n,sayac);

    return 0;
}

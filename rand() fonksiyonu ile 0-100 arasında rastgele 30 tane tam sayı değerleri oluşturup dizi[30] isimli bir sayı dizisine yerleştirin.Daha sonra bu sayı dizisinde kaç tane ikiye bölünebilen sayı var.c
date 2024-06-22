#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&n);
    int dizi[n];
    int sayac;

    srand(time(NULL));
    for(int i=0;i<=n;i++)
    {

        dizi[i]=rand()%100;
    }
    printf("\n");
    for(int j=0;j<=n;j++)
    {
        printf("Dizinin %d . elemani : %d\n",j,dizi[j]);
    }
    printf("\n");
    for(int k = 0;k<=30;k++)
    {
        if(dizi[k]%2==0)
        {
            sayac++;
        }
    }
    printf("dizi[%d] elemanli dizide 2'ye bolunen %d tane sayi vardir",n,sayac);



    return 0;
}

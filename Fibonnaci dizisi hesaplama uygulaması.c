#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ýlk 20 fibonacci sayýsýný hesaplama uygulamasý.
    int n;
    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&n);
    int dizi[n];
    dizi[0]=1;
    dizi[1]=1;


    for(int i=2;i<=n;i++)
    {
        dizi[i]=dizi[i-2]+dizi[i-1];
    }
    printf("\n");
    for(int i=0;i<=n;i++)
    {
        printf("Fibonacci dizisinin %d . elemani : %d\n",i,dizi[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int enBuyukEleman=0;
    int enBuyukElemaninIndeksi=0;
    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&n);
    int dizi[n];
    for(int i =0;i<n;i++)
    {
        printf("dizi[%d]:",i);
        scanf("%d",&dizi[i]);
        if(enBuyukEleman<dizi[i])
        {
            enBuyukEleman=dizi[i];
            enBuyukElemaninIndeksi=i;
        }


    }
    printf("En buyuk eleman:%d",enBuyukEleman);
    printf("En buyuk elemanin indeksi:%d",enBuyukElemaninIndeksi);
    return 0;
}

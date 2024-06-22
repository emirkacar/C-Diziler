#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5 elemanli bir dizinin en buyuk ve en kucuk elemanini bulma uygulamasý.
    int dizi[5]={1,27,36,44,5};
    int enBuyuk=0;
    int enKucuk=1000;

    for(int i=0;i<5;i++)
    {

        if(enBuyuk<dizi[i])
        {
            enBuyuk=dizi[i];
        }
        if(enKucuk>dizi[i])
        {
            enKucuk=dizi[i];
        }
    }
    printf("En buyuk sayi : %d\n",enBuyuk);
    printf("En kucuk sayi:%d",enKucuk);


}

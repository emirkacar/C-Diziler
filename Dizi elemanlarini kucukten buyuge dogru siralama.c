#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dizi elemanlarini kucukten buyuge dogru siralama
    int dizi[7]={20,5,2,5,1,9,4};
    int gecici;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(dizi[i]>dizi[j])
            {
                gecici=dizi[i]; //dizi[i]'yi geciciye atadýðým için dizi[i]'nin içi boþaldý
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }

    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",dizi[i]);

    }



    return 0;
}

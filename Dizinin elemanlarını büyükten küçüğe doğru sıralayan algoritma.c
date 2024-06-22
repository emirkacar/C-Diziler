#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dizinin elemanlarýný büyükten küçüðe doðru sýralayan algoritma
    int dizi[6]={65,14,47,63,19,38};
    int gecici =0;

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(dizi[i]<dizi[j])
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;

            }
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d\t",dizi[i]);
    }
    return 0;
}

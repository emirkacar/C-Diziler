#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Çok boyutlu matrisler

    /*int matris[2][4];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("matris[%d][%d]:",i,j);
            scanf("%d",&matris[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n"); //Ýkinci for dongusunden çýktýktan sonra alt satýra geç demek.
    }*/


    //Güzel bir örnek.Kaðýt kalemle çözebilirsin    .

    /*int fabrika[2][3];
    int sayac;

    for(int i=0;i<2;i++)
    {
        for(int j =0;j<3;j++)
        {
            printf("%d. fabrikadaki %d. kisinin maasi:",i+1,j+1);
            scanf("%d",&fabrika[i][j]);
            if(fabrika[i][j]>1000)
            {
                fabrika[i][j]+=fabrika[i][j]*0.10;
                if(fabrika[i][j]%2==0)
                {
                    sayac++;
                }

            }
        }
        printf("\n");
    }

    printf("*******************\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d.fabrikadaki %d kisinin maasi:%d\n",i+1,j+1,fabrika[i][j]);
        }
        printf("\n");
    }
    printf("Fabrikada maaslarinin 2'ye tam bolunebilen %d tane isci vardir.\n",sayac);
    return 0;*/

    /*int dizi[2][4][3];//2 okulun 20 sýnýfýn 3 öðrencisinin yaþý gibi düþün.(2*4*3 tane sayýyý bellekte tutucak.](Çok boyutlu dizi örneði)

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d.okulun %d.sinifin %d.ogrencisi :",i+1,j+1,k+1);
                scanf("%d",&dizi[i][j][k]);
            }
            printf("\n");
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d.okulun %d.sinifin %d.ogrencisinin yasi :%d\n",i+1,j+1,k+1,dizi[i][j][k]);


            }
            printf("\n");
        }
    }
}*/

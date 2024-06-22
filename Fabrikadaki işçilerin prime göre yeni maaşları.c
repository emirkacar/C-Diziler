#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fabrika[2][2][100];
    char isim[2][2][100];
    int maas[2][2];
    int urun[2][2];
    int prim[2][2];
    for(int i=0;i<2;i++)
    {
        printf("%d.FABRIKA\n",i+1);
        for(int j=0;j<2;j++)
        {
            printf("Fabrikanin adi: ");
            scanf("%s", fabrika[i][j]);

            printf("Iscinin isimi: ");
            scanf("%s", isim[i][j]);

            printf("Elemanin maasi: ");
            scanf("%d", &maas[i][j]);

            printf("Kac adet urun uretildi?: ");
            scanf("%d", &urun[i][j]);

            printf("Prim ne kadar?: ");
            scanf("%d", &prim[i][j]);

            if(urun[i][j]>10)
            {
                maas[i][j]+=(prim[i][j]*urun[i][j])+maas[i][j];
            }
        }
    printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("%d.FABRIKA\n",i+1);
        for(int j=0;j<2;j++)
        {
            printf("Fabrikanin adi:%s\n",fabrika[i][j]);


            printf("Ýscilerin isimleri:%s\n",isim[i][j]);


            printf("Elemanin maasi:%d\n",maas[i][j]);


            printf("Kac adet urun uretildi?:%d\n",urun[i][j]);

            printf("Prim:%d",prim[i][j]);

        }

    printf("\n");
    }
    printf("\n\n");
    printf("YENI MAASLAR");
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("%d.FABRIKA\n",i+1);
        for(int j=0;j<2;j++)
        {

        }
    printf("\n");
    }
    printf("\n\n");
    for(int i=0;i<2;i++)
    {
        printf("%d.FABRIKA\n",i+1);
        for(int j=0;j<2;j++)
        {


            printf("%s.elemaninin yeni maasi:%d\n",isim[i][j],maas[i][j]);


        }
    printf("\n");
    }




    return 0;
}

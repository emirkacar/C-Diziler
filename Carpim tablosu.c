#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Dizileri kullanarak carpim tablosu yapmak.
    int dizi[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("dizi[%d][%d]:",i,j);
            scanf("%d",&dizi[i][j]);
        }
    }
    printf("\n\n");
     for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            dizi[i][j]=(i+1)*(j+1);
        }
    }
     for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("dizi[%d]*dizi[%d]=%d\n",i,j,dizi[i][j]);

        }
    }



    return 0;
}

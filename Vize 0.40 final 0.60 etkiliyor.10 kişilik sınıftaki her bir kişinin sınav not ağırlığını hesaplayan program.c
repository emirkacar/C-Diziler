#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vizeNotu[10];
    int finalNotu[10];
    float ortalama[10];



    for(int i=0;i<10;i++)
    {
        printf("vizeNotu[%d]:",i);
        scanf("%d",&vizeNotu[i]);

        printf("finalNotu[%d]",i);
        scanf("%d",&finalNotu[i]);

        ortalama[i]=vizeNotu[i]*0.40+finalNotu[i]*0.60;
    }
    printf("Ortalamalar\n");
    for(int i =0;i<10;i++)
    {
        printf("%d.ogrencinin ortalamasi : %.2f\n",(i+1),ortalama[i]);
    }

    return 0;
}

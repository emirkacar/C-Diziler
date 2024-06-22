#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Dizinin elemanlarýný kullanýcýdan alýp ekrana bas sonra dizinin elemanlarinin karekokunu hesapla.
    int dizi[5];
    int toplam=0;
    printf("5 sayi giriniz.\n");
    for(int i=0;i<5;i++)
    {
        printf("%d.indeks:",i); scanf("%d",&dizi[i]);
        toplam+=dizi[i];
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d.elemani:%d\n",i,dizi[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%.2f\n",sqrt(dizi[i]));
    }
    printf("Toplam:%d",toplam);

}

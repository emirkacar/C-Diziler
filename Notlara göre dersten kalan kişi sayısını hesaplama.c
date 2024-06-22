#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Notlara göre dersten kalan kiþi sayýsýný hesaplama.
   int n;
   int toplam=0;
   int sayac;
   float ortalama;

   printf("Sinifta kac kisi var?:");
   scanf("%d",&n);
   int notlar[n];
   for(int i=0;i<n;i++)
   {
       printf("notlar[%d]:",i);
       scanf("%d",&notlar[i]);
       toplam+=notlar[i];
       if(notlar[i]<50)
       {
           sayac++;
           printf("%d.kisi dersten kalmistir.\n",(i+1));
       }

   }
   printf("%Toplam:%d\n",toplam);
   ortalama=(float)toplam/n;
   printf("%.2f\n",ortalama);
   printf("Dersten kalan kisi sayisi:%d",sayac);




    return 0;
}

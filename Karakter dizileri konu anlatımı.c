#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Karakter dizilerine giriþ.

    /*1.Yol
    char isim[25];
    printf("Lutfen isminizi giriniz:");
    scanf("%s",&isim);   //isim icin %s kullanýlýr.
    printf("\n");

    printf("Isminiz:%s",isim); */




    /* 2.Yol
    char marka[] = {'A','U','D','I','\0'};    //En sona \0 yazmasý zorunlu.
    printf("Marka:%s\n",marka);
    return 0; */

    //3.Yol                        // C dilinde stringler yoktur.
    char marka[] ="Audi";
    printf("Markanin ilk elemani : %c\n",marka[3]);
    printf("\n\n");
    printf("length : %d\n",sizeof(marka)); // \0'ý da dahil ediyor.
    printf("Arrayin eleman sayisi: %d\n",strlen(marka)); // 0'ý dahil etmiyor strlen() fonksiyonu.

    for(int i=0;i<strlen(marka);i++)
    {
        printf("Dizinin %d . elemani :%c\n",i,marka[i]);

    }
}
